#include<stdio.h>
void main()
{
    int a=2000;
    if((a%4==0 && a%100!=0)|| a%400==0)
    {
    printf("year is leap");
    }

    else
    printf("year is not a leap year");
}