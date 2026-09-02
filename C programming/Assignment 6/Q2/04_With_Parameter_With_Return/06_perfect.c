#include <stdio.h>

int checkPerfect(int n)
{
    int i;
    int sum = 0;

    for(i = 1; i < n; i++)
    {
        if(n % i == 0)
            sum = sum + i;
    }

    if(sum == n)
        return 1;
    else
        return 0;
}

void main()
{
    int n = 28;
    int result;

    result = checkPerfect(n);

    if(result == 1)
        printf("Perfect");
    else
        printf("Not Perfect");
}
