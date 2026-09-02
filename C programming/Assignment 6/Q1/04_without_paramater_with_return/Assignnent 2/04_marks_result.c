#include <stdio.h>

int checkResult()
{
    float marks = 78;

    if(marks > 75)
        return 1;
    else if(marks > 65)
        return 2;
    else if(marks > 55)
        return 3;
    else if(marks >= 40)
        return 4;
    else
        return 5;
}

void main()
{
    int result;

    result = checkResult();

    if(result == 1)
        printf("Distinction");
    else if(result == 2)
        printf("First Class");
    else if(result == 3)
        printf("Second Class");
    else if(result == 4)
        printf("Pass Class");
    else
        printf("Fail");
}
