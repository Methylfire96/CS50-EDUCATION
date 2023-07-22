#include <cs50.h>
#include <stdio.h>


int main(void)
{

    float start;
    do
    {
        start= get_float("Start Size: ");
    }
    while (start<9);

    float end;
    do
    {
        end= get_float("End Size: ");
    }
    while (end<start);

    float years = 0;
    while (start < end)
    {
        start += start/12;
        years++;
    }

    printf("Years: %f\n", years);
}