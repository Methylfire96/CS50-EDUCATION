#include <cs50.h>
#include <stdio.h>
#include <string.h>
// LINEAR SEARCH with a BOOL!!
int main (void)
{
    string strings[] = {"A", "B", "c", "d", "e", "f", "g"};

    string s = get_string("String: ");
    string compare =
    for (int i = 0; i < 7; i++)
    {
        if (strings[i] == strcmp(s, strings);compare)
        {
            printf("Found\n");
            return 0;
        }
    }
    printf("Not Found\n");
    return 1;
}