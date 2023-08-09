#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <math.h>
#include <string.h>



int main(void)
{
    string plaintext = get_string("Plaintext: ");

    int c = 0;
    int len = strlen(plaintext);

    for (int i = 0; i < len; i++)
    {
        if (isalpha(plaintext[i]))
        {
            c++;
        }
    
    }
    printf("test %i", c);
}