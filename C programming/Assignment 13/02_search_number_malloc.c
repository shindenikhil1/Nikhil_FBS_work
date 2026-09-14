#include <stdio.h>
#include <stdlib.h>

void searchNumber(int *arr, int n, int no)
{
    int i;
    int found = 0;

    for(i = 0; i < n; i++)
    {
        if(arr[i] == no)
        {
            found = 1;
            break;
        }
    }

    if(found == 1)
        printf("%d is present at index %d", no, i);
    else
        printf("%d is not present in array", no);
}

void main()
{
    int n = 5;
    int i;
    int no;
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

    printf("Enter number to search: ");
    scanf("%d", &no);

    searchNumber(arr, n, no);

    free(arr);
}
