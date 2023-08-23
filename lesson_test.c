#include<stdio.h>

int main (void)
{
    char *s = "#####";
    printf("%s\n", s);
    printf("%s\n", s+1);
    printf("%s\n", s+2);
    printf("%s\n", s+3);
    printf("%s\n", s+4);
    printf("%s\n", s+3);
    printf("%s\n", s+2);
    printf("%s\n", s+1);
    printf("%s\n", s);
}