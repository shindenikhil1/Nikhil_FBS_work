#include <stdio.h>

void checkStrong(int n)
{
    int temp, rem;
    int i, fact;
    int sum = 0;

    temp = n;

    while(n > 0)
    {
        rem = n % 10;
        fact = 1;

        for(i = 1; i <= rem; i++)
            fact = fact * i;

        sum = sum + fact;
        n = n / 10;
    }

    if(sum == temp)
        printf("Strong");
    else
        printf("Not Strong");
}

void main()
{
    int n = 145;

    checkStrong(n);
}
