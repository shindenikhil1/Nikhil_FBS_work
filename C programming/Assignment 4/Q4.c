#include <stdio.h>

void main()
{
    int n;
    int i, no, temp, rem;
    int fact, sum;
    printf("Enter the upper limit: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        no = i;
        temp = no;
        sum = 0;

        while (no > 0)
        {
            rem = no % 10;

            fact = 1;

            for (int j = 1; j <= rem; j++)
            {
                fact = fact * j;
            }

            sum = sum + fact;

            no = no / 10;
        }

        if (sum == temp)
        {
            printf("%d ", temp);
        }
    }
}