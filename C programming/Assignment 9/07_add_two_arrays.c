#include <stdio.h>

void addArrays(int arr[], int brr[], int crr[], int n)
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
    int arr[5] = {1, 2, 3, 4, 5};
    int brr[5] = {10, 20, 30, 40, 50};
    int crr[5];

    addArrays(arr, brr, crr, 5);
}
