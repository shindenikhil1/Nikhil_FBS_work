#include <stdio.h>

int checkEvenOdd()
{
    int no = 10;

    if(no % 2 == 0)
        return 1;
    else
        return 0;
}

void main()
{
    int result;

    result = checkEvenOdd();

    if(result == 1)
        printf("10 is Even");
    else
        printf("10 is Odd");
}
