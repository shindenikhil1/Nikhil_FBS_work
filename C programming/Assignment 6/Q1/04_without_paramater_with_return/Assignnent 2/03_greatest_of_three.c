#include <stdio.h>

int greatest()
{
    int a = 10;
    int b = 25;
    int c = 15;

    if(a > b)
    {
        if(a > c)
            return a;
        else
            return c;
    }
    else
    {
        if(b > c)
            return b;
        else
            return c;
    }
}

void main()
{
    int result;

    result = greatest();

    printf("%d is greatest", result);
}
