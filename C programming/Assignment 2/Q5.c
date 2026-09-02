#include<stdio.h>
void main()
{
    int a;
    char b;
    printf("Enter a price: ");
    scanf("%d",&a);
    printf("Enter if you are a student or not (y/n): ");
    scanf(" %c",&b);
    if (b=='y')
    {
        if (a>=500)
        {
            a=a-(a*0.2);
            printf("congratulations you got 20 percent discount and your final price is: %d",a);
        }
        else
        {
            a=a-(a*0.1);
            printf("congratulations you got 10 percent discount and your final price is: %d",a);
        }
    }
    else
    {
        if (a>=600)
        {
            a=a-(a*0.15);
            printf("congratulations you got 15 percent discount and your final price is: %d",a);
        }
        else
        {
            printf("sorry you are not eligible for any discount and your final price is: %d",a);
        }
    }
}