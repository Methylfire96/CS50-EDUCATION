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
    for(int i = 0; i < lengh; i++)
    {
        prog[i] = 2 *(prog[i-1]);
        printf("%i\n", prog[i]);
    }
}