#include <stdio.h>

void main()
{
    int n, i, j;
    int no = 1;

    printf("Enter n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d ", no);
            no++;
        }

        printf("\n");
    }
}