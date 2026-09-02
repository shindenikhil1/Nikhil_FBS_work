#include <stdio.h>

int checkLeapYear(int year)
{
    if(year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
        return 1;
    else
        return 0;
}

void main()
{
    int year = 2024;
    int result;

    result = checkLeapYear(year);

    if(result == 1)
        printf("%d is a Leap Year", year);
    else
        printf("%d is not a Leap Year", year);
}
