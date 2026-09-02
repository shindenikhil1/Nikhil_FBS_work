#include <stdio.h>

void checkAge(int *age)
{
    if(*age < 12)
        printf("Child");
    else if(*age <= 19)
        printf("Teenager");
    else if(*age <= 59)
        printf("Adult");
    else
        printf("Senior");
}

void main()
{
    int age = 25;

    checkAge(&age);
}
