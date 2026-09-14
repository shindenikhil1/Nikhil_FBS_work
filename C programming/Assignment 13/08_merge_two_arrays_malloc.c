#include <stdio.h>
#include <stdlib.h>

void mergeArrays(int *arr, int *brr, int *crr, int n, int m)
{
    int i;

    for(i = 0; i < n; i++)
        crr[i] = arr[i];

    for(i = 0; i < m; i++)
        crr[n + i] = brr[i];

    printf("Merged array:\n");

    for(i = 0; i < n + m; i++)
        printf("%d ", crr[i]);
}

void main()
{
    int n = 5;
    int m = 5;
    int i;
    int *arr;
    int *brr;
    int *crr;

    arr = (int *)malloc(n * sizeof(int));
    brr = (int *)malloc(m * sizeof(int));
    crr = (int *)malloc((n + m) * sizeof(int));

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

    printf("Enter %d elements for second array:\n", m);

    for(i = 0; i < m; i++)
        scanf("%d", &brr[i]);

    mergeArrays(arr, brr, crr, n, m);

    free(arr);
    free(brr);
    free(crr);
}
