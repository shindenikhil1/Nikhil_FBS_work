#include <stdio.h>

void greatest(int *a, int *b, int *c)
{
    if(*a > *b)
    {
        if(*a > *c)
            printf("%d is greatest", *a);
        else
            printf("%d is greatest", *c);
    }
    else
    {
        if(*b > *c)
            printf("%d is greatest", *b);
        else
            printf("%d is greatest", *c);
    }
}

void main()
{
    int a = 10;
    int b = 25;
    int c = 15;

    greatest(&a, &b, &c);
}
