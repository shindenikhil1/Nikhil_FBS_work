#include <stdio.h>

void mergeArrays(int arr[], int brr[], int crr[], int n, int m)
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
    int arr[5] = {1, 2, 3, 4, 5};
    int brr[5] = {10, 20, 30, 40, 50};
    int crr[10];

    mergeArrays(arr, brr, crr, 5, 5);
}
