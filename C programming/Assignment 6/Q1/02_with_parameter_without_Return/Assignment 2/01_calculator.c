#include <stdio.h>

void calculator()
{
    int no1 = 20;
    int no2 = 10;
    char op = '+';
    int result;

    switch(op)
    {
        case '+':
            result = no1 + no2;
            printf("Addition = %d", result);
            break;

        case '-':
            result = no1 - no2;
            printf("Subtraction = %d", result);
            break;

        case '*':
            result = no1 * no2;
            printf("Multiplication = %d", result);
            break;

        case '/':
            result = no1 / no2;
            printf("Division = %d", result);
            break;

        case '%':
            result = no1 % no2;
            printf("Modulus = %d", result);
            break;

        default:
            printf("Invalid operator");
    }
}

void main()
{
    calculator();
}
