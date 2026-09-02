#include <stdio.h>

int checkLeapYear()
{
    int year = 2024;

    if(year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
        return 1;
    else
        return 0;
}

void main()
{
    int result;

    result = checkLeapYear();

    if(result == 1)
        printf("2024 is a Leap Year");
    else
        printf("2024 is not a Leap Year");
}
