#include <stdio.h>

void main()
{
    int arr[7] = {10, 11, 15, 17, 20, 23, 29};
    int i, j;
    int count;

    printf("Prime numbers:\n");

    for(i = 0; i < 7; i++)
    {
        count = 0;

        for(j = 1; j <= arr[i]; j++)
        {
            if(arr[i] % j == 0)
                count++;
        }

        if(count == 2)
            printf("%d ", arr[i]);
    }
}
