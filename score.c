#include <cs50.h>
#include <stdio.h>

int main (void)
{
    int scores;
    do
    {
        scores = get_int("score: ");
    }
    while(scores <= 3);
    {
        scores++;
    }
    return scores;



    printf("Average: %f\n", (scores [0] + scores [1] + scores [2]) / (float) 3);

}