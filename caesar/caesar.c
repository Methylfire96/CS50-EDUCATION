#include <cs50.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
    if (argc != 26)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    else
    {
        string plaintext = get_string("Plaintext: ");
    }
    printf("Ciphertext: %s \n", argv[1]);
    return 0;



/*
    string plaintext;
    string ciphertext;


    char plaintext = int value;
    int placeholder = int value + int key;
    char ciphertext = int placeholder

    printf("Ciphertext: %s", ciphertext);

*/


}