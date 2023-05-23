#include <cs50.h>
#include <stdio.h>

int main(void)
{
    const int size = 5;
    for (int row = 0; row<size; row++)
    {
        for (int col = 0; col<size; col++)
        {
            printf("#");

        }
        printf("\n");
    }

}