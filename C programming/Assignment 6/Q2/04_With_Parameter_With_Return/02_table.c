#include <stdio.h>

int printTable(int n)
{
    int i;

    for(i = 1; i <= 10; i++)
        printf("%d ", n * i);

    return n;
}

void main()
{
    int n = 5;

    printTable(n);
}
