#include <stdio.h>
#include <cs50.h>

int main()
{

}

int get_brick_size(void)
{
    int brick_size;
    do
    {
        brick_size = get_int("How many bricks you want to build?: ");
    }
    while (brick_size < 1);
    return brick_size;
}

void print_stairs(int)