#include <stdio.h>
#include <stdlib.h>

void sumArray(int *arr, int n)
{
    int i;
    int sum = 0;

    for(i = 0; i < n; i++)
        sum = sum + arr[i];

    printf("Sum of all numbers = %d", sum);
}

void main()
{
    int n = 5;
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

    sumArray(arr, n);

    free(arr);
}
