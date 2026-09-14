#include <stdio.h>
#include <stdlib.h>

void printOddEven(int *arr, int n)
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
    int n = 6;
    int i;
    int *arr;

    arr = (int *)malloc(n * sizeof(int));

    if(arr == NULL)
    {
        printf("Memory allocation failed");
        return;
    }

    printf("Enter %d elements:\n", n);

    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printOddEven(arr, n);

    free(arr);
}
