#include<stdio.h>
void main()
{
    int no1,no2;
    char op ;

    printf("Enter first number : ");
    scanf("%d",&no1);
    printf("Enter second number : ");
    scanf("%d",&no2);
    printf("Enter operator(+,-,*,/,%%) : ");
    scanf(" %c",&op);

    if(op == '+')
        printf("Addition = %d", no1 + no2);

    else if(op == '-')
        printf("Subtraction = %d", no1 - no2);

    else if(op == '*')
        printf("Multiplication = %d", no1 * no2);

    else if(op == '/')
        printf("Division = %d", no1 / no2);

    else if(op == '%')
        printf("Modulus = %d", no1 % no2);

    else
        printf("Invalid operator");
}