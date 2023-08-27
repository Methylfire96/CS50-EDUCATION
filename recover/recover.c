#include <cs50.h>
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

const int BLOCKSIZE = 512;

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("wrong input! #err1\n");
        return 1;
    }

    string filename = argv[1];
    FILE *file = fopen(filename, "r");
    if (file == NULL)
    {
        printf("No such file found. #err2\n");
        return 2;
    }

    uint8_t buffer[BLOCKSIZE];
    // jpg first 4 inputs = {0xff, 0xd8, 0xff, 0xe n, n = 1,2,3,4,5,6,7,8,9,a,b,c,d,e,f};
    FILE *jpg = NULL;
    int counter = 0;
    while (fread(buffer, BLOCKSIZE, 1, file) == 1)
    {   //if finding jpg file, the next file is 512byts far away
        if (buffer[0] == 0xff && buffer[1] == 0xd8 && buffer[2] == 0xff &&(buffer[3] & 0xf0) == 0xe0)
        {
            //clode jpg file
            if(jpg != NULL)
            {
                fclose(jpg);
            }

            //create new jpg file + counter
            char jpg_file[8];
            sprintf(jpg_file, "%03i.jpg", counter);
            jpg = fopen(jpg_file, "w");
            //check jpg
            if (jpg == NULL)
            {
                fclose(file);
                printf("Could not create %s. #err3\n", jpg_file);
                return 3;
            }
            counter++;
        }

        if (jpg != NULL)
        {
            fwrite(buffer, BLOCKSIZE, 1, jpg);
        }
    }
    fclose(file);
    if (jpg != NULL)
    {
        fclose(jpg);
    }
    return 0;
}