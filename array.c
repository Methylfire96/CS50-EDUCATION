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
    for(int i = 1; i < lengh; i++)
    {
        printf("%i\n", prog[i] *2);
    }
}