#include <stdio.h>

void checkArmstrong()
{
    int n = 153;
    int temp, rem;
    int sum = 0;

    temp = n;

    while(n > 0)
    {
        rem = n % 10;
        sum = sum + rem * rem * rem;
        n = n / 10;
    }

    if(sum == temp)
        printf("Armstrong");
    else
        printf("Not Armstrong");
}

void main()
{
    checkArmstrong();
}
