#include <stdio.h>

int triangleType()
{
    int a = 5;
    int b = 5;
    int c = 5;

    if(a == b && b == c)
        return 1;
    else if(a == b || b == c || a == c)
        return 2;
    else
        return 3;
}

void main()
{
    int result;

    result = triangleType();

    if(result == 1)
        printf("Equilateral triangle");
    else if(result == 2)
        printf("Isosceles triangle");
    else
        printf("Scalene triangle");
}
