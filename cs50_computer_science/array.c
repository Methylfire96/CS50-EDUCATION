#include<cs50.h>
#include<stdio.h>

int main (void)
{   //get length
    int length;
    do
    {
        length = get_int("length: ");
    }
    while(length < 1);

    int prog[length];

    //set first value
    prog[0] = 1;

    //print first value
    printf("%i\n", prog[0]);

    for(int i = 1; i < length; i++)
    {
        //make the current element twice as previous
        prog[i] = 2 *(prog[i-1]);

        //print current element
        printf("%i\n", prog[i]);
    }
}