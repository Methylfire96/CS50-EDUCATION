#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int *list = malloc(3 * sizeof(int)); //pointer(*) list
    if (list == NULL)
    {
        return 1;
    }

    list[0] = 1;
    list[1] = 2;
    list[2] = 3;
    //...

    //impl. new usage of 4bytes
    int *tmp = malloc(4* sizeof(int)); //pointer(*) tmp
    if (tmp == NULL)
    {
        free(list);
        return 1;
    }

    for (int i = 0; i < 3; i++)
    {
        tmp[i] = list[i];
    }
    tmp[3] = 4;

    free(list); //free the alloc 3bytes, so we can use them for the new list incl tmp, so printing 1,2,3,4

    list = tmp; //now pointer list points onto tmp

    //old usage of 3bytes
    for (int i = 0; i < 3; i++)
    {
        printf("%i\n", list[i]);
    }
    free(list);
    return 0;
}