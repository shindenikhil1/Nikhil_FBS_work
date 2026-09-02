#include <stdio.h>

void factorial(int n)
{
    int i;
    int fact = 1;

    for(i = 1; i <= n; i++)
        fact = fact * i;

    printf("Factorial = %d", fact);
}

void main()
{
    int n = 5;

    factorial(n);
}
