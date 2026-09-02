#include <stdio.h>

void checkEvenOdd()
{
    int no = 10;

    if(no % 2 == 0)
        printf("%d is Even", no);
    else
        printf("%d is Odd", no);
}

void main()
{
    checkEvenOdd();
}
