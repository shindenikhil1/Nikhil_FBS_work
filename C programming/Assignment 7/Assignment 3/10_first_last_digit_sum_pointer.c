#include <stdio.h>

void firstLastSum(int *n)
{
    int no, first, last, sum;

    no = *n;
    last = no % 10;

    while(no >= 10)
        no = no / 10;

    first = no;
    sum = first + last;

    printf("Sum of first and last digit = %d", sum);
}

void main()
{
    int n = 12345;

    firstLastSum(&n);
}
