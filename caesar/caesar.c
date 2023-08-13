#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{   //request user
    if (argc != 2)
    {
        printf("Usage: %s key\n", argv[0]);
        return 1;
    }
    //has to be a number
    char *num = argv[1];
    for (int i = 0; num[i] != '\0'; i++)
    {
        if (!isdigit(num[i]))
        {
            printf("Usage: %s key\n", argv[0]);
            return 1;
        }
    }
    //switch string to int
    int key = atoi(argv[1]);

    //request plaintext
    printf("Plaintext: ");
    char plaintext[150];
    fgets(plaintext, sizeof(plaintext), stdin);

    int len = strlen(plaintext);

    for (int j = 0; j < len; j++)
    {
        if (isalpha(plaintext[j]))
        {   //capital letters or not for the subtraction
            char characters;
            if (isupper(plaintext[j]))
            {
                characters = 'A';
            }
            else
            {
                characters = 'a';
            }
            printf("%c", (plaintext[j] - characters + key) % 26 + characters);
        }
        else
        {
            printf("%c", plaintext[j]);
        }
    }

    printf("\n");
}
