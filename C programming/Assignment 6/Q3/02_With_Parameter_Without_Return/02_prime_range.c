#include <stdio.h>

void printPrime(int n)
{
    int i, j;
    int count;

    printf("Prime numbers from 1 to %d:\n", n);

    for(i = 1; i <= n; i++)
    {
        count = 0;

        for(j = 1; j <= i; j++)
        {
            if(i % j == 0)
                count++;
        }

        if(count == 2)
            printf("%d ", i);
    }
}

void main()
{
    int n = 50;

    printPrime(n);
}
