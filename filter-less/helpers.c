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
    {
        for(int j = 0; j < width; j--)
        {
            
        }
    }
    return;
}

// Blur image
void blur(int height, int width, RGBTRIPLE image[height][width])
{
    return;
}


/*{
            if(image[i][j].rgbtRed < 0xFF /2 && image[i][j].rgbtGreen < 0xFF /2 && image[i][j].rgbtBlue < 0xFF /2)
            {
                image[i][j].rgbtRed = 0x00, image[i][j].rgbtGreen = 0x00, image[i][j].rgbtBlue = 0x00;
            }
            else
            {
                image[i][j].rgbtRed = 0xFF, image[i][j].rgbtGreen = 0xFF, image[i][j].rgbtBlue = 0xFF;
            }
        ////
         if(image[i][j].rgbtRed == 0x00 && image[i][j].rgbtGreen == 0x00 && image[i][j].rgbtBlue == 0x00)
            {
                image[i][j].rgbtRed = 0xFF, image[i][j].rgbtGreen = 0xFF, image[i][j].rgbtBlue = 0xFF;
            }
            if(image[i][j].rgbtRed < 0xFF /2 && image[i][j].rgbtGreen < 0xFF /2 && image[i][j].rgbtBlue < 0xFF /2)
            {
                image[i][j].rgbtRed = 0x00, image[i][j].rgbtGreen = 0x00, image[i][j].rgbtBlue = 0x00;
            }
            if(image[i][j].rgbtRed > 0xFF /2 && image[i][j].rgbtGreen > 0xFF /2 && image[i][j].rgbtBlue > 0xFF /2)
            {
                image[i][j].rgbtRed = 0x00, image[i][j].rgbtGreen = 0x00, image[i][j].rgbtBlue = 0x00;
            }
            if(image[i][j].rgbtRed == 0xFF && image[i][j].rgbtGreen == 0xFF && image[i][j].rgbtBlue == 0xFF)
            {
                image[i][j].rgbtRed = 0x00, image[i][j].rgbtGreen = 0x00, image[i][j].rgbtBlue = 0x00;
            }

        }
        */