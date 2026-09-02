#include <stdio.h>

void factorial()
{
    int n = 5;
    int i;
    int fact = 1;

    for(i = 1; i <= n; i++)
        fact = fact * i;

    printf("Factorial = %d", fact);
}

void main()
{
    factorial();
}
