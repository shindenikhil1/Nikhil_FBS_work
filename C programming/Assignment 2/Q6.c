#include<stdio.h>
void main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    if (a%3==0 && a%5==0)
    {
        printf("The number is divisible by both 3 and 5");
    }
    else if (a%3==0)
    {
        printf("The number is divisible by 3");
    }
    else if (a%5==0)
    {
        printf("The number is divisible by 5");
    }
    else
    {
        printf("The number is not divisible by either 3 or 5");
    }
}