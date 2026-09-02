#include <stdio.h>

void printTable(int n)
{
    int i;

    for(i = 1; i <= 10; i++)
        printf("%d ", n * i);
}

void main()
{
    int n = 5;

    printTable(n);
}
