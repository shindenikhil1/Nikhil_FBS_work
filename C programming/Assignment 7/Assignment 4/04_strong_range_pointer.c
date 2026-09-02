#include <stdio.h>

void printStrong(int *n)
{
    int i, j, no, temp, rem, fact, sum;

    printf("Strong numbers from 1 to %d:\n", *n);

    for(i = 1; i <= *n; i++)
    {
        no = i;
        temp = no;
        sum = 0;

        while(no > 0)
        {
            rem = no % 10;
            fact = 1;

            for(j = 1; j <= rem; j++)
                fact = fact * j;

            sum = sum + fact;
            no = no / 10;
        }

        if(sum == temp)
            printf("%d ", temp);
    }
}

void main()
{
    int n = 500;

    printStrong(&n);
}
