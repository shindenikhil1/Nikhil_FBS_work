#include <stdio.h>

void checkLeapYear(int year)
{
    if(year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
        printf("%d is a Leap Year", year);
    else
        printf("%d is not a Leap Year", year);
}

void main()
{
    int year = 2024;

    checkLeapYear(year);
}
