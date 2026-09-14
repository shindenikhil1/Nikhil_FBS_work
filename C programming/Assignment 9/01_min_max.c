#include <stdio.h>

void findMinMax(int arr[], int n)
{
    int i;
    int min = arr[0];
    int max = arr[0];

    for(i = 1; i < n; i++)
    {
        if(arr[i] < min)
            min = arr[i];

        if(arr[i] > max)
            max = arr[i];
    }

    printf("Minimum = %d\n", min);
    printf("Maximum = %d", max);
}

void main()
{
    int arr[5] = {10, 25, 5, 40, 15};

    findMinMax(arr, 5);
}
