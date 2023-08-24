#include "helpers.h"

// Convert image to grayscale
void grayscale(int height, int width, RGBTRIPLE image[height][width])
{
    for(int i = 0; i < height -1; i++)
    {
        for(int j = 0; j < width -1; j++)
        {
            if(image[i][j].rgbtRed < 0xFF/3 && image[i][j].rgbtGreen < 0xFF/3 && image[i][j].rgbtBlue < 0xFF/3)
            {
                image[i][j].rgbtRed /3.0, image[i][j].rgbtGreen = 0xFF/3.0, image[i][j].rgbtBlue = 0xFF/3.0;
            }
            else
            {
                image[i][j].rgbtRed = 0x00/3.0, image[i][j].rgbtGreen = 0x00/3.0, image[i][j].rgbtBlue = 0x00/3.0;

            }
        }
    }
    return;
}

// Convert image to sepia
void sepia(int height, int width, RGBTRIPLE image[height][width])
{
    return;
}

// Reflect image horizontally
void reflect(int height, int width, RGBTRIPLE image[height][width])
{
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