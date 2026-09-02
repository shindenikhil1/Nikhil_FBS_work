#include <stdio.h>

void checkPerfect(int *n)
{
    int i;
    int sum = 0;

    for(i = 1; i < *n; i++)
    {
        if(*n % i == 0)
            sum = sum + i;
    }

    if(sum == *n)
        printf("Perfect");
    else
        printf("Not Perfect");
}

void main()
{
    int n = 28;

    checkPerfect(&n);
}
