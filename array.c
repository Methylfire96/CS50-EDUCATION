#include<cs50.h>
#include<stdio.h>

int main (void)
{
    int lengh;
    do
    {
        lengh = get_int("lengh: ");
    }
    while(lengh < 1);

    int prog[lengh];
    prog[0] = 1;
    printf("%i\n", prog[0]);

    for(int i = 1; i < lengh; i++)
    {
        prog[i] = 2 *(prog[i-1]);
        printf("%i\n", prog[i]);
    }
}