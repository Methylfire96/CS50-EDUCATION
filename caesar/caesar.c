#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("Usage: %s key\n", argv[0]);
        return 1;
    }

    int key = atoi(argv[1]);


    printf("Plaintext: ");
    char plaintext[150];
    fgets(plaintext, sizeof(plaintext), stdin);


    int len = strlen(plaintext);

    for (int i = 0; i < len; i++)
    {
        if (isalpha(plaintext[i]))
        {
            char characters;
            if (isupper(plaintext[i]))
            {
                characters = 'A';
            }
            else
            {
                characters = 'a';
            }
        printf(" %c", (plaintext[i] - characters + key) % 26 + characters);
        }
        else
        {
            printf("%c", (plaintext[i]));
        }
    }
    printf("\n");
    return 0;
}
