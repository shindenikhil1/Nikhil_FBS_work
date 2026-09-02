#include <stdio.h>

int checkPrime(int n)
{
    int i;
    int count = 0;

    for(i = 1; i <= n; i++)
    {
        if(n % i == 0)
            count++;
    }

    if(count == 2)
        return 1;
    else
        return 0;
}

void main()
{
    int n = 7;
    int result;

    result = checkPrime(n);

    if(result == 1)
        printf("Prime");
    else
        printf("Not Prime");
}
