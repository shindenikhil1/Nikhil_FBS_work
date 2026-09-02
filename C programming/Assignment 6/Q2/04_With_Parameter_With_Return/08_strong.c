#include <stdio.h>

int checkStrong(int n)
{
    int temp, rem;
    int i, fact;
    int sum = 0;

    temp = n;

    while(n > 0)
    {
        rem = n % 10;
        fact = 1;

        for(i = 1; i <= rem; i++)
            fact = fact * i;

        sum = sum + fact;
        n = n / 10;
    }

    if(sum == temp)
        return 1;
    else
        return 0;
}

void main()
{
    int n = 145;
    int result;

    result = checkStrong(n);

    if(result == 1)
        printf("Strong");
    else
        printf("Not Strong");
}
