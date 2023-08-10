#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

int count_c(string plaintext);

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n", argv[0]);
        return 1;
    }

    int key = atoi(argv[1]);

    string plaintext = get_string("Plaintext: ");
    char plaintext[150];
    fgets(plaintext, sizeof(plaintext), stdin);


    int len = strlen(plaintext);

    for (int i = 0; i < len; i++)
    {
        if (isalpha(plaintext[i]))
        {
            printf(" %c", (plaintext[i] + key) % 26));
        }
        else
        {
            printf("c)
        }
    }
    return c;
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