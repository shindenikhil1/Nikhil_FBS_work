#include <stdio.h>

int checkStrong()
{
    int n = 145;
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
    int result;

    result = checkStrong();

    if(result == 1)
        printf("Strong");
    else
        printf("Not Strong");
}
