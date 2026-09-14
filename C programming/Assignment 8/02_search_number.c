#include <stdio.h>

void main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    int no = 30;
    int i;
    int found = 0;

    for(i = 0; i < 5; i++)
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
