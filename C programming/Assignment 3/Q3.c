#include<stdio.h>
void main()
{
    int a,b,sum=0;
    printf("Enter range (start, end): ");
    scanf("%d %d",&a,&b);
    while (a<=b)
    {
        sum += a;
        a++;
    }
    printf("The sum of numbers from %d to %d is: %d", a, b, sum);
}