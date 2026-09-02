#include <stdio.h>

int factorial(int n)
{
    int i;
    int fact = 1;

    for(i = 1; i <= n; i++)
        fact = fact * i;

    return fact;
}

void main()
{
    int n = 5;
    int result;

    result = factorial(n);

    printf("Factorial = %d", result);
}
