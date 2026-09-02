#include <stdio.h>

int firstLastSum()
{
    int n = 12345;
    int first, last, sum;

    last = n % 10;

    while(n >= 10)
        n = n / 10;

    first = n;
    sum = first + last;

    return sum;
}

void main()
{
    int result;

    result = firstLastSum();

    printf("Sum of first and last digit = %d", result);
}
