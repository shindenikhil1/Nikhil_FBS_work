#include <stdio.h>

int checkEvenOdd(int no)
{
    if(no % 2 == 0)
        return 1;
    else
        return 0;
}

void main()
{
    int no = 10;
    int result;

    result = checkEvenOdd(no);

    if(result == 1)
        printf("%d is Even", no);
    else
        printf("%d is Odd", no);
}
