#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

const int BLOCK_SIZE = 512;

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("wrong input! #err1\n");
        return 1; // error1
    }

    char *file = argv[1];
    FILE *raw_file = fopen(file, "r");
    // check if raw file = NULL, error2
    if (raw_file == NULL)
    {
        printf("No such file found. #err2\n");
        return 2;
    }
    // if finding jpg file, the next file is 512byts far away
    uint8_t buffer[BLOCK_SIZE];
    // jpg first 4 inputs==signature = {0xff, 0xd8, 0xff, 0xe n, n = 1,2,3,4,5,6,7,8,9,a,b,c,d,e,f};
    FILE *jpg = NULL;
    int counter = 0;
    while (fread(buffer, BLOCK_SIZE, 1, raw_file) == 1)
    {
        if (buffer[0] == 0xff && buffer[1] == 0xd8 && buffer[2] == 0xff && (buffer[3] & 0xf0) == 0xe0)
        {
            // close jpg file
            if (jpg != NULL)
            {
                fclose(jpg);
            }

            // create new jpg file + counter
            char jpg_file[8];
            sprintf(jpg_file, "%03i.jpg", counter);
            jpg = fopen(jpg_file, "w");
            // check if jpg = NULL, then error3
            if (jpg == NULL)
            {
                fclose(raw_file);
                printf("Could not create %s. #err3\n", jpg_file);
                return 3;
            }
            counter++;
        }
        // write the jpg_file
        if (jpg != NULL)
        {
            fwrite(buffer, BLOCK_SIZE, 1, jpg);
        }
    }
    // close the used buffer of the opened file and created file
    fclose(raw_file);
    if (jpg != NULL)
    {
        fclose(jpg);
    }
    return 0;
}