#include<cs50.h>
#include<stdio.h>
#include<string.h>

int main(void)
{
    string s = get_string("Before: ");
    printf("After: ");
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {   //die nummer 32 ist die Differenz zw Großbuchstaben und Kleinbuchstaben aus der Tabelle!
            printf("%c", s[i] - 32);
        }
        else
        {
            printf("%c", s[i]);
        }
    }
    printf("\n");
}