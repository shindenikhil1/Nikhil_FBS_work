#include <stdio.h>

void sumRange()
{
    int start = 1;
    int end = 5;
    int i;
    int sum = 0;

    for(i = start; i <= end; i++)
        sum = sum + i;

    printf("Sum = %d", sum);
}

void main()
{
    sumRange();
}
