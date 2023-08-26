#include <cs50.h>
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

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
        return 1;
    }

    uint8_t buffer[4];
    uint8_t buffer_jpg[] = {255, 216, 255, 224};
    fread(buffer, 1, 4, file);
    for (int i = 0; i < 4; i++)
    {
        if (buffer_jpg[i] != buffer[i])
        {
            printf("There is no further JPG file!\n");
        }
    }
    printf("found file");
    /*int image_count = counter;
    int counter = 0;
    for (int i = 0; i < image_count; i++)
    {
        counter++;
        printf("%i\n", counter);
    }*/
}