#include <stdio.h>

void checkAge()
{
    int age = 25;

    if(age < 12)
        printf("Child");
    else if(age <= 19)
        printf("Teenager");
    else if(age <= 59)
        printf("Adult");
    else
        printf("Senior");
}

void main()
{
    checkAge();
}
