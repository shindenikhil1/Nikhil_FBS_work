#include <stdio.h>

void checkPrime(int n)
{
    int i;
    int count = 0;

    for(i = 1; i <= n; i++)
    {
        if(n % i == 0)
            count++;
    }

    if(count == 2)
        printf("Prime");
    else
        printf("Not Prime");
}

void main()
{
    int n = 7;

    checkPrime(n);
}
