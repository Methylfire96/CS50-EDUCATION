#include <cs50.h>
#include <stdio.h>
#include <string.h>

void draw(int n);

int main(void)
{
    draw(1);
}

void draw(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("#");
    }
    printf("\n");
    // draw(n + 1); ---- endlos loop in diesem fall = recursion und kein loop!!
}