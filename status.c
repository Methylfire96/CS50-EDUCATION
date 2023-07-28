#include <cs50.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("Missing command line\n");
        return 1;
    }
    else
    {
        printf("hello, %s\n", argv[1]);
        return 0;
        //null bedeutet, das programm ist richtig durchgelaufen!
    }
}