#include <cs50.h>
#include <stdio.h>


int main (void)
{
    string name = get_string("name: ");
    int age = get_int("age: ");
    long number = get_long("number: ");
    printf("Name %s. Age %i. Phone Number %li.\n", name, age, number);
}
