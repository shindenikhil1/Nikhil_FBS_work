#include <stdio.h>

int checkArmstrong()
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
        return 1;
    else
        return 0;
}

void main()
{
    int result;

    result = checkArmstrong();

    if(result == 1)
        printf("Armstrong");
    else
        printf("Not Armstrong");
}
