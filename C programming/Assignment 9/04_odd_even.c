#include <stdio.h>

void printOddEven(int arr[], int n)
{
    int i;

    printf("Even numbers:\n");

    for(i = 0; i < n; i++)
    {
        if(arr[i] % 2 == 0)
            printf("%d ", arr[i]);
    }

    printf("\nOdd numbers:\n");

    for(i = 0; i < n; i++)
    {
        if(arr[i] % 2 != 0)
            printf("%d ", arr[i]);
    }
}

void main()
{
    int arr[8] = {10, 15, 22, 31, 40, 45, 50, 61};

    printOddEven(arr, 8);
}
