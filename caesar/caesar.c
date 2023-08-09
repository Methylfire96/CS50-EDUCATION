#include <cs50.h>
#include <stdio.h>

int main(int argc, string *argv[])
{
    if (argc > 0 && argc < 26)
    {
        printf("Usage: ./caesar key");
        return 1;
    }
    else
    {
        string plaintext;
        do
        {
            plaintext = get_string("Plaintext: ");
        }
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