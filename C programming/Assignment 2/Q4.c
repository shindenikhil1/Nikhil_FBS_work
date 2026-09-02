#include<stdio.h>
void main()
{
    int a;
    printf("Enter a marks: ");
    scanf("%d",&a);
    if (a>=75 && a<=100)
    {
        printf("Destination");
    }
    else if (a>=65 && a<75)
    {
        printf("First Class");
    }
    else if (a>=55 && a<65)
    {
        printf("second Class");
    }
    else if (a>=40 && a<55)
    {
        printf("Pass Class");
    }
    else if (a>=0 && a<40)
    {
        printf("Fail");
    }
    else
    {
        printf("Invalid marks");
    }
}