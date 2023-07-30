#include<cs50.h>
#include<stdio.h>


bool triangle(float x, float y, float z);

int main(void)
{
    float x = get_int("x: ");
    float y = get_int("y: ");
    float z = get_int("z: ");

    bool triangle(float x, float y, float z)
    {
        if((x+y<=z) || (x+z<=y) || (y+z<=x))
        {
            return false;
        }

        if ((x <= 0) || (y <= 0) || (z <= 0))
        {
           return false;
        }
        return true;
    }
}