#include <cs50.h>
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

const int BLOCKSIZE = 512;

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("wrong input!\n");
        return 1;
    }

    string filename = argv[1];
    FILE *file = fopen(filename, "r");
    if (file == NULL)
    {
        printf("No such file found.\n");
        return 2;
    }

    uint8_t buffer[BLOCKSIZE];
    // jpg first 4 inputs = {0xff, 0xd8, 0xff, 0xe n, n = 1,2,3,4,5,6,7,8,9,a,b,c,d,e,f};
    FILE *jpg
    int counter = 0;
    fread(buffer, 1, 4, file);
    for (int i = 0; i < 4; i++)
    {   //if finding jpg file, the next file is 512byts far away
        if (buffer[0] == 0xff & buffer[1] == 0xd8 & buffer[2] == 0xff &(buffer[3] & 0xf0) == 0xe0)
        {
            sprintf(filename, "%03i.jpg", 2);
            FILE *img = fopen(filename, "w");
            fwrite(jpgbuffer, 1, 512, jpg);
        }
        else
        {
            fclose(filename);
        }

    }
    printf("found -- file\n");

    /*int image_count = counter;
    int counter = 0;
    for (int i = 0; i < image_count; i++)
    {
        counter++;
        printf("%i\n", counter);
    }*/
}