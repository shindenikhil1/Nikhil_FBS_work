#include <stdio.h>

int checkDivisibility(int no)
{
    if(no % 3 == 0 && no % 5 == 0)
        return 1;
    else if(no % 3 == 0)
        return 2;
    else if(no % 5 == 0)
        return 3;
    else
        return 4;
}

void main()
{
    int no = 15;
    int result;

    result = checkDivisibility(no);

    if(result == 1)
        printf("Divisible by both");
    else if(result == 2)
        printf("Divisible by 3 but not by 5");
    else if(result == 3)
        printf("Divisible by 5 but not by 3");
    else
        printf("Divisible by None");
}
