#include <cs50.h>
#include <stdio.h>

int count_c

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
        int c = count_c(plaintext);
        printf("Ciphertext: %s, %s \n", plaintext, argv[]);
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