#include <stdio.h>

void printPerfect()
{
    int n = 500;
    int i, j;
    int sum;

    printf("Perfect numbers from 1 to %d:\n", n);

    for(i = 1; i <= n; i++)
    {
        sum = 0;

        for(j = 1; j < i; j++)
        {
            if(i % j == 0)
                sum = sum + j;
        }

        if(sum == i)
            printf("%d ", i);
    }
}

void main()
{
    printPerfect();
}
