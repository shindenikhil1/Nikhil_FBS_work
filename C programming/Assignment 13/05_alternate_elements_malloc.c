#include <stdio.h>
#include <stdlib.h>

void printAlternate(int *arr, int n)
{
    int i;

    printf("Alternate elements:\n");

    for(i = 0; i < n; i = i + 2)
        printf("%d ", arr[i]);
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

    printAlternate(arr, n);

    free(arr);
}
