#include <stdio.h>
#include <cs50.h>

int get_size(void);
void print_stairs(int size);


int main()
{
    int brickSize = get_size();
    print_stairs(brickSize);
}

int get_size(void)
{
    int brickSize;
    do
    {
        brickSize = get_int("How many bricks you want to build?: ");
    }
    while (brickSize < 1);
    return brickSize;
}

void print_stairs(int size)
{
    for (int row = 0; row < size; row++)
    {
        for(int col = row + 1; col < size; col++)
        {
            printf("#");
        }
        printf("\n");
    }
}