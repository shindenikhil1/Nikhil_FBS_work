#include <stdio.h>

void printAlternate(int arr[], int n)
{
    int i;

    printf("Alternate elements:\n");

    for(i = 0; i < n; i = i + 2)
        printf("%d ", arr[i]);
}

void main()
{
    int arr[6] = {10, 20, 30, 40, 50, 60};

    printAlternate(arr, 6);
}
