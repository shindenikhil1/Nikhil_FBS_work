#include <stdio.h>

void sortArray(int arr[], int n)
{
    int i, j, temp;

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
    int arr[5] = {40, 10, 50, 20, 30};

    sortArray(arr, 5);
}
