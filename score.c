#include <cs50.h>
#include <stdio.h>

int main (void)
{
    int scores [3]
    do
    {
        scores++
    }
    while(scores < 0);
    return scores;
    scores [0] = get_int("score 1: ");
    scores [1] = get_int("score 2: ");
    scores [2] = get_int("score 3: ");


    printf("Average: %f\n", (scores [0] + scores [1] + scores [2]) / (float) 3);

}