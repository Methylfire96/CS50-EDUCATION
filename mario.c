#include <stdio.h>
#include <cs50.h>

int get_brickSize(void);
void print_stairs(int brickSize);


int main()
{
    int brickSize = get_brickSize();
    print_stairs(brickSize);
}

int get_brickSize(void)
{
    int brickSize;
    do
    {
        brickSize = get_int("How many bricks you want to build?: ");
    }
    while (brickSize < 1);
    return brickSize;
}

void print_stairs(int brickSize)
{
    for (int row = 0; row < brickSize; row++)
    {
        for(int col = 0; col < brickSize, col++)
        {
            printf("#");
        }
        printf("\n");
    }
}