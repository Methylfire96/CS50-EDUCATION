#include<cs50.h>
#include<stdio.h>




int main(void)
{
    float x = get_int("x: \n");
    float y = get_int("y: \n");
    float z = get_int("z: \n");

    bool triangle(float x, float y, float z);
}


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