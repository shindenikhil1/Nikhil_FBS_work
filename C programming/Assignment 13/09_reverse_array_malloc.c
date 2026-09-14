#include <stdio.h>
#include <stdlib.h>

void reverseArray(int *arr, int n)
{
    int i;

    printf("Reverse array:\n");

    for(i = n - 1; i >= 0; i--)
        printf("%d ", arr[i]);
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

    reverseArray(arr, n);

    free(arr);
}
