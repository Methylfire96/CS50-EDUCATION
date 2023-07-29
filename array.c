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
}