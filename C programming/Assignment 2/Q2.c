#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter three sides of the triangle: ");
    scanf("%d %d %d",&a,&b,&c);
    if (a==b && b==c)
    {
        printf("the triangle is equilateral");
    }
    else if (a==b || b==c || a==c)
    {
        printf("the triangle is isosceles");
    }
    else
    {
        printf("the triangle is scalene");
    }

}