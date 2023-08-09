#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <math.h>
#include <string.h>

int count_c(string plaintext);

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    else
    {
        string plaintext = get_string("Plaintext: ");
        char c1 = plaintext;
        printf(" %i %s, c1, argv[1]);
        return 0;
    }

/*
    string plaintext;
    string ciphertext;


    char plaintext = int value;
    int placeholder = int value + int key;
    char ciphertext = int placeholder

    printf("Ciphertext: %s", ciphertext);

*/

}

int count_c(string plaintext);
{
    int number = 0;
    int len = strlen(plaintext);

    for (int i = 0; i < len; i++)
    {
        if (isalpha(plaintext[i]))
        {
            number++;
        }
    }
    return number;
}

int cipher(int number, int key)
{
    int ci = number + key;
    char letter_ci = int ci
}