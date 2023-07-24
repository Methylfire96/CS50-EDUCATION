#include <cs50.h>
#include <stdio.h>
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

/* ICECREAM COAN
void print_stairs(int size)
{
    for (int row = 0; row <= size; row++)
    {
        for(int col = row + 1; col <= size; col++)
        {
            printf("#");
        }
        printf("\n");
    }
}
*/

/* DOWNSTAIRS
void print_stairs(int size)
{
    for (int row = size; row > 0; row--)
    {
        for(int col = row; col <= size; col++)
        {
            printf("#");
        }
        printf("\n");
    }
}
*/

// STAIRS!!
void print_stairs(int size)
{
    for (int row = 1; row <= size; row++)
    {
        for (int gap = size - row; gap > 0; gap--)
        {
            printf(" ");
        }

        for (int col = 1; col <= row; col++)
        {
            printf("#");
        }

        printf("\n");
    }
}
