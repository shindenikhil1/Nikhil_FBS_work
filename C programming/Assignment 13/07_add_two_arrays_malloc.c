#include <stdio.h>
#include <stdlib.h>

void addArrays(int *arr, int *brr, int *crr, int n)
{
    int i;

    for(i = 0; i < n; i++)
        crr[i] = arr[i] + brr[i];

    printf("Third array:\n");

    for(i = 0; i < n; i++)
        printf("%d ", crr[i]);
}

void main()
{
    int n = 5;
    int i;
    int *arr;
    int *brr;
    int *crr;

    arr = (int *)malloc(n * sizeof(int));
    brr = (int *)malloc(n * sizeof(int));
    crr = (int *)malloc(n * sizeof(int));

    if(arr == NULL || brr == NULL || crr == NULL)
    {
        printf("Memory allocation failed");
        free(arr);
        free(brr);
        free(crr);
        return;
    }

    printf("Enter %d elements for first array:\n", n);

    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter %d elements for second array:\n", n);

    for(i = 0; i < n; i++)
        scanf("%d", &brr[i]);

    addArrays(arr, brr, crr, n);

    free(arr);
    free(brr);
    free(crr);
}
