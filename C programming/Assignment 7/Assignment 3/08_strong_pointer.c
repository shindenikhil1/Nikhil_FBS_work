#include <stdio.h>

void checkStrong(int *n)
{
    int no, temp, rem;
    int i, fact;
    int sum = 0;

    no = *n;
    temp = no;

    while(no > 0)
    {
        rem = no % 10;
        fact = 1;

        for(i = 1; i <= rem; i++)
            fact = fact * i;

        sum = sum + fact;
        no = no / 10;
    }

    if(sum == temp)
        printf("Strong");
    else
        printf("Not Strong");
}

void main()
{
    int n = 145;

    checkStrong(&n);
}
