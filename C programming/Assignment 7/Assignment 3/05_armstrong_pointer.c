#include <stdio.h>

void checkArmstrong(int *n)
{
    int no, temp, rem;
    int sum = 0;

    no = *n;
    temp = no;

    while(no > 0)
    {
        rem = no % 10;
        sum = sum + rem * rem * rem;
        no = no / 10;
    }

    if(sum == temp)
        printf("Armstrong");
    else
        printf("Not Armstrong");
}

void main()
{
    int n = 153;

    checkArmstrong(&n);
}
