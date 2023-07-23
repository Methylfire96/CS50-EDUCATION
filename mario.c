#include <stdio.h>
#include <cs50.h>

int main()
{
    string brick = get_string("How many bricks: ");

    printf("#", brick);
}