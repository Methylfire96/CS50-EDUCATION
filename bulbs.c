#include<cs50.h>
#include<stdio.h>
#include<math.h>
#include<string.h>




int main (void)
{
    string text = get_string("What text, should we krypt?: \n");
    int len = stlen(text);
    printf("%i", len);

}