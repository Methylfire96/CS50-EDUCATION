#include <cs50.h>
#include <stdio.h>
#include <string.h>
// LINEAR SEARCH with a BOOL!!
int main (void)
{
    string strings[] = {"A", "B", "c", "d", "e", "f", "g"};

    string s = get_string("String: ");

    for (int i = 0; i < 7; i++)
    {
        if (strcmp strings[i] == s)
        {
            printf("Found\n");
            return 0;
        }
    }
    printf("Not Found\n");
    return 1;
}