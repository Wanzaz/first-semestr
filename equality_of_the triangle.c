#include <stdio.h>
#include <stdlib.h>

/ **
2. Enter the three sides of the triangle. Write a function that returns the number 1 if the triangle can be constructed, otherwise it returns the number 0.
** /


float triangle (int a, int b, int c)
{
    if (a + b > c && b + c > a && c + a > b)
    {
        return 1;
    }
    return 0;
}





int main ()
{
    float a, b, c;
    printf ("Enter the three sides of a triangle: \ n");
    scanf ("% f% f% f", & a, & b, & c);
    if (triangle (a, b, c))
    {
        printf ("A triangle with sides %f %f %f can be constructed \n", a, b, c);
    }
    else
    {
        printf ("Triangle of sides %f %f %f cannot be constructed  \n ", a, b, c);
    }
    return 0;
}
