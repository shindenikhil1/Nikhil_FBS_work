#include <stdio.h>

void sumArray(int arr[], int n)
{
    int i;
    int sum = 0;

    for(i = 0; i < n; i++)
        sum = sum + arr[i];

    printf("Sum of all numbers = %d", sum);
}

void main()
{
    int arr[5] = {10, 20, 30, 40, 50};

    sumArray(arr, 5);
}
