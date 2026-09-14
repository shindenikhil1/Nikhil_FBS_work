#include <stdio.h>

void reverseArray(int arr[], int n)
{
    int i;

    printf("Reverse array:\n");

    for(i = n - 1; i >= 0; i--)
        printf("%d ", arr[i]);
}

void main()
{
    int arr[5] = {10, 20, 30, 40, 50};

    reverseArray(arr, 5);
}
