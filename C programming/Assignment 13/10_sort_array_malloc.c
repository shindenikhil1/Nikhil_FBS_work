#include <stdio.h>
#include <stdlib.h>

void sortArray(int *arr, int n)
{
    int i, j;
    int temp;

    for(i = 0; i < n; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("Sorted array:\n");

    for(i = 0; i < n; i++)
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

    sortArray(arr, n);

    free(arr);
}
