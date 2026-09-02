#include <stdio.h>

void sumRange(int *start, int *end)
{
    int i;
    int sum = 0;

    for(i = *start; i <= *end; i++)
        sum = sum + i;

    printf("Sum = %d", sum);
}

void main()
{
    int start = 1;
    int end = 5;

    sumRange(&start, &end);
}
