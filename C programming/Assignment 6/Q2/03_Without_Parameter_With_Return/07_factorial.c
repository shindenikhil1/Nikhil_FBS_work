#include <stdio.h>

int factorial()
{
    int n = 5;
    int i;
    int fact = 1;

    for(i = 1; i <= n; i++)
        fact = fact * i;

    return fact;
}

void main()
{
    int result;

    result = factorial();

    printf("Factorial = %d", result);
}
