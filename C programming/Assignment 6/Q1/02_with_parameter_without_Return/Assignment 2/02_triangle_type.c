#include <stdio.h>

void triangleType()
{
    int a = 5;
    int b = 5;
    int c = 5;

    if(a == b && b == c)
        printf("Equilateral triangle");
    else if(a == b || b == c || a == c)
        printf("Isosceles triangle");
    else
        printf("Scalene triangle");
}

void main()
{
    triangleType();
}
