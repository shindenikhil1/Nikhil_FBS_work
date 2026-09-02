#include <stdio.h>

void calculator(int *no1, int *no2, char *op)
{
    if(*op == '+')
        printf("Addition = %d", *no1 + *no2);
    else if(*op == '-')
        printf("Subtraction = %d", *no1 - *no2);
    else if(*op == '*')
        printf("Multiplication = %d", *no1 * *no2);
    else if(*op == '/')
        printf("Division = %d", *no1 / *no2);
    else if(*op == '%')
        printf("Modulus = %d", *no1 % *no2);
    else
        printf("Invalid operator");
}

void main()
{
    int no1 = 20;
    int no2 = 10;
    char op = '+';

    calculator(&no1, &no2, &op);
}
