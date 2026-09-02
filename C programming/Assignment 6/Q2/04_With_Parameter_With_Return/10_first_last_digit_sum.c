#include <stdio.h>

int firstLastSum(int n)
{
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
    int n = 12345;
    int result;

    result = firstLastSum(n);

    printf("Sum of first and last digit = %d", result);
}
