#include <cs50.h>
#include <stdio.h>

int main(void)
{
    double x = get_double("x: ");
    double y = get_double("y: ");

    printf("%.20f\n", x / y);
}



