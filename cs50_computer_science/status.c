#include <cs50.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("Missing command line\n");
        return 1; // egal welche ZAHL
    }
    else
    {
        printf("hello, %s\n", argv[1]);
        return 0; // egal welche ZAHL
        //null bedeutet, das programm ist richtig durchgelaufen!
    }
}

// wenn ich im TERMINAL echo$? eingebe, bekomm ich den wert von return (0 oder 1)!