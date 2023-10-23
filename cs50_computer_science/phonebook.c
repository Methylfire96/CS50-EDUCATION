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
    person people[2];

    people[0].name = "Carter";
    people[0].number = "123454321";

    people[1].name = "David";
    people[1].number = "543212345";


    string name = get_string("Name: ");

    for (int i = 0; i < 2; i++)
    {
        if (strcmp (people[i].name, name) == 0)
        {
            printf("Found %s\n", people[i].number);
            return 0; //wenn 0 returned wird, dann ist die funktion richtig!!
        }
    }
    printf("Not Found\n");
    return 1; //muss kein return sein, sagt aber dass die funktion falsch ist!!
}