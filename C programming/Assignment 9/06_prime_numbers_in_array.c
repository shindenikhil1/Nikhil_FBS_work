#include <stdio.h>

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

void printPrime(int arr[], int n)
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
    int arr[7] = {10, 11, 15, 17, 20, 23, 29};

    printPrime(arr, 7);
}
