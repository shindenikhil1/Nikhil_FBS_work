#include <stdio.h>

void printArmstrong(int *n)
{
    int i, no, temp, rem, sum;

    printf("Armstrong numbers from 1 to %d:\n", *n);

    for(i = 1; i <= *n; i++)
    {
        no = i;
        temp = no;
        sum = 0;

        while(no > 0)
        {
            rem = no % 10;
            sum = sum + rem * rem * rem;
            no = no / 10;
        }

        if(sum == temp)
            printf("%d ", temp);
    }
}

void main()
{
    int n = 500;

    printArmstrong(&n);
}
