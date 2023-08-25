#include "helpers.h"
#include<math.h>

// Convert image to grayscale
void grayscale(int height, int width, RGBTRIPLE image[height][width])
{
    for(int i = 0; i < height; i++)
    {
        for(int j = 0; j < width; j++)
        {
            int average = (image[i][j].rgbtRed + image[i][j].rgbtGreen +image[i][j].rgbtBlue )/3.0 + 0.5;

            image[i][j].rgbtRed = average;
            image[i][j].rgbtGreen = average;
            image[i][j].rgbtBlue = average;

        }

    }
    return;
}

// Convert image to sepia
void sepia(int height, int width, RGBTRIPLE image[height][width])
{
    for(int i = 0; i < height; i++)
    {
        for(int j = 0; j < width; j++)
        {   // 255 is the max rgb number, but math.h needs fmin!!
            int sepiaRed = fmin(255, ((image[i][j].rgbtRed * .393) + (image[i][j].rgbtGreen * .769) + (image[i][j].rgbtBlue * .189))+ 0.5);
            int sepiaGreen = fmin(255, ((image[i][j].rgbtRed * .349) + (image[i][j].rgbtGreen * .686) + (image[i][j].rgbtBlue * .168))+ 0.5);
            int sepiaBlue = fmin(255, ((image[i][j].rgbtRed * .272) + (image[i][j].rgbtGreen * .534) + (image[i][j].rgbtBlue * .131))+ 0.5);

            image[i][j].rgbtRed = sepiaRed;
            image[i][j].rgbtGreen = sepiaGreen;
            image[i][j].rgbtBlue = sepiaBlue;
        }
    }
    return;
}

// Reflect image horizontally
void reflect(int height, int width, RGBTRIPLE image[height][width])
{
    for(int i = 0; i < height; i++)
    {   //swap in the middle of the picture = width/2
        for(int j = 0; j < width/2; j++)
        {   //debug wants "RGBTRIPLE" x = the image -> swapping image to pixel change -> pixel change = x!!
            RGBTRIPLE reflection = image[i][j];         //temporary = original
            image[i][j] = image[i][width - 1 - j];      //original = creation
            image[i][width - 1 - j] = reflection;       //creation = temporary
        }
    }
    return;
}

// Blur image
void blur(int height, int width, RGBTRIPLE image[height][width])
{   //build a temporary variable
    RGBTRIPLE temporary[height][width];
    for(int i = 0; i < height; i++)
    {
        for(int j = 0; j < width; j++)
        {   //temporary = original image
            temporary[i][j] = image[i][j];
        }
    }
    // build the 3x3 pixels around with the average tone of the RGB
    for(int i = 0; i < height; i++)
    {
        for(int j = 0; j < width; j++)
        {
            int totalRed = 0, totalGreen = 0, totalBlue = 0;
            float counter = 0.0;

            for(int vertical = -1; vertical < 2; vertical++)
            {
                for(int horizontal = -1; horizontal < 2; horizontal++)
                {
                    int madeVertical = i + vertical;
                    int madeHorizontal = j + horizontal;

                    if(madeVertical < 0 || madeVertical > (height - 1) || madeHorizontal < 0 || madeHorizontal > (width - 1))
                    {
                        continue;
                    }
                totalRed += image[madeVertical][madeHorizontal].rgbtRed;
                totalGreen += image[madeVertical][madeHorizontal].rgbtGreen;
                totalBlue += image[madeVertical][madeHorizontal].rgbtBlue;

                counter++;

                }
            }
            //math.h has the LL round function, to get to the nearest number
            temporary[i][j].rgbtRed = llround(totalRed / counter);
            temporary[i][j].rgbtGreen = llround(totalGreen / counter);
            temporary[i][j].rgbtBlue = llround(totalBlue / counter);
        }
    }
    for(int i = 0; i < height; i++)
    {
        for(int j = 0; j < width; j++)
        {
            image[i][j] = temporary[i][j];
        }
    }

    return;
}