#include <cs50.h>
#include <stdio.h>

const int N = 3;
// collection is defined as an ARRAY
float average(int lengh, int collection[]);


int main (void)
{
    int scores [N];

    for (int i = 0; i < N; i++)
    {
        scores[i] = get_int("score: ");
    }

    printf("Average: %f\n", average(N, scores));

}

float average(int lengh, int collection[])
{
    int summierung = 0;
    for (int i = 0, i < lengh; i++)
    {
        summierung += collection[i];
    }
    return summierung / (float) lengh;
}