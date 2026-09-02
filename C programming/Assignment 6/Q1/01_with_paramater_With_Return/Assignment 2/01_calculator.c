#include <stdio.h>

int calculator(int no1, int no2, char op)
{
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
    int no1 = 20;
    int no2 = 10;
    char op = '+';
    int result;

    result = calculator(no1, no2, op);

    if(op == '+')
        printf("Addition = %d", result);
    else if(op == '-')
        printf("Subtraction = %d", result);
    else if(op == '*')
        printf("Multiplication = %d", result);
    else if(op == '/')
        printf("Division = %d", result);
    else if(op == '%')
        printf("Modulus = %d", result);
    else
        printf("Invalid operator");
}
