#include <stdio.h>

int greatest(int a, int b, int c)
{
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
    int a = 10;
    int b = 25;
    int c = 15;
    int result;

    result = greatest(a, b, c);

    printf("%d is greatest", result);
}
