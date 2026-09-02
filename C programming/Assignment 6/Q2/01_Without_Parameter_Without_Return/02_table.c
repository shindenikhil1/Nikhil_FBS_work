#include <stdio.h>

void printTable()
{
    int n = 5;
    int i;

    for(i = 1; i <= 10; i++)
        printf("%d ", n * i);
}

void main()
{
    printTable();
}
