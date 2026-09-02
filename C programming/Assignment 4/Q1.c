#include <stdio.h>

void main()
{
    int n, original, temp;
    int digits = 0, sum = 0;
    int digit, power;
    int i, j;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;
    temp = n;

    for (; temp > 0; temp = temp / 10)
    {
        digits++;
    }

    temp = n;

    for (; temp > 0; temp = temp / 10)
    {
        digit = temp % 10;
        power = 1;

        for (j = 1; j <= digits; j++)
        {
            power = power * digit;
        }

        sum = sum + power;
    }

    if (sum == original)
    {
        printf("%d is an Armstrong number", original);
    }
    else
    {
        printf("%d is not an Armstrong number", original);
    }
}