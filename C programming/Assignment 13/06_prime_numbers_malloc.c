#include <stdio.h>
#include <stdlib.h>

int isPrime(int no)
{
    int i;

    if(no < 2)
        return 0;

    for(i = 2; i < no; i++)
    {
        if(no % i == 0)
            return 0;
    }

    return 1;
}

void printPrime(int *arr, int n)
{
    int i;

    printf("Prime numbers:\n");

    for(i = 0; i < n; i++)
    {
        if(isPrime(arr[i]) == 1)
            printf("%d ", arr[i]);
    }
}

void main()
{
    int n = 7;
    int i;
    int *arr;

    arr = (int *)malloc(n * sizeof(int));

    if(arr == NULL)
    {
        printf("Memory allocation failed");
        return;
    }

    printf("Enter %d elements:\n", n);

    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printPrime(arr, n);

    free(arr);
}
