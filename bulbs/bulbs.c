#include <cs50.h>
#include <stdio.h>
#include <string.h>

const int BITS_IN_BYTE = 8;

void print_bulb(int bit);

int main(void)
{
    string text = get_string("what text should we krypt?: ");
    int len = strlen(text);

    for(int i = 0; i < len; i++)
    {
        char c = text[i];
        int value = (int) c;

        for(int j = BITS_IN_BYTE - 1; j >= 0; j--)
        {
            int bit = (value >> j) & 1;
            print_bulb(bit);
        }
        printf("\n");
    }
    printf("\n");

    return 0;
}

void print_bulb(int bit)
{
    if (bit == 0)
    {
        // Dark emoji
        printf("\U000026AB");
    }
    else if (bit == 1)
    {
        // Light emoji
        printf("\U0001F7E1");
    }
}
