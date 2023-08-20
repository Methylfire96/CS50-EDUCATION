#include <cs50.h>
#include <stdio.h>
#include <string.h>

typedef struct
{
    string name;
    string number;
}
person;



int main (void)
{


    string name = get_string("Name: ");

    for (int i = 0; i < 7; i++)
    {
        if (strcmp (names[i], name) == 0)
        {
            printf("Found\n");
            return 0; //wenn 0 returned wird, dann ist die funktion richtig!!
        }
    }
    printf("Not Found\n");
    return 1; //muss kein return sein, sagt aber dass die funktion falsch ist!!
}