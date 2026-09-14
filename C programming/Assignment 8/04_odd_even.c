#include <stdio.h>

void main()
{
    int arr[8] = {10, 15, 22, 31, 40, 45, 50, 61};
    int i;

    printf("Even numbers:\n");

    for(i = 0; i < 8; i++)
    {
        if(arr[i] % 2 == 0)
            printf("%d ", arr[i]);
    }

    printf("\nOdd numbers:\n");

    for(i = 0; i < 8; i++)
    {
        if(arr[i] % 2 != 0)
            printf("%d ", arr[i]);
    }
}
