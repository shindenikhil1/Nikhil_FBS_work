#include <stdio.h>

void firstLastSum()
{
    int n = 12345;
    int temp;
    int first, last, sum;

    temp = n;

    last = n % 10;

    while(n >= 10)
        n = n / 10;

    first = n;
    sum = first + last;

    printf("Sum of first and last digit = %d", sum);
}

void main()
{
    firstLastSum();
}
