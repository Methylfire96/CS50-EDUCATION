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
            char base = isupper(plaintext[i]) ? 'A' : 'a';
            printf(" %c", (plaintext[i] - base + key) % 26 + base);
        }
        else
        {
            printf("%c", plaintext[i]);
        }
    }
    printf("\n");
    return 0;
}
/*
    string plaintext;
    string ciphertext;


    char plaintext = int value;
    int placeholder = int value + int key;
    char ciphertext = int placeholder

    printf("Ciphertext: %s", ciphertext);







int cipher(int number, int key)
{
    int ci = number + key;
    char letter_ci = int ci
}
*/