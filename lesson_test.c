#include<stdio.h>

int main (void)
{
    char *s = "########";
    printf("%p %p\n", s,s);
    printf("%s   %s\n", s+1, s+1);
    printf("%s     %s\n", s+2, s+2);
    printf("%s       %s\n", s+3, s+3);
    printf("%s         %s\n", s+4, s+4);
    printf("%s       %s\n", s+3, s+3);
    printf("%s     %s\n", s+2, s+2);
    printf("%s   %s\n", s+1, s+1);
    printf("%s %s\n", s, s);
}