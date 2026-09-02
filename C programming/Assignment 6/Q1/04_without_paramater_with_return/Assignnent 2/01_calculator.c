#include <stdio.h>

int calculator()
{
    int no1 = 20;
    int no2 = 10;
    char op = '+';
    int result;

    if(op == '+')
        result = no1 + no2;
    else if(op == '-')
        result = no1 - no2;
    else if(op == '*')
        result = no1 * no2;
    else if(op == '/')
        result = no1 / no2;
    else if(op == '%')
        result = no1 % no2;
    else
        result = 0;

    return result;
}

void main()
{
    int result;

    result = calculator();

    printf("Result = %d", result);
}
