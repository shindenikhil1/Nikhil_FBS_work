#include <stdio.h>

void main()
{
    int n, original, temp;
    int digits = 0, sum = 0;
    int digit, power, i;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;
    temp = n;
    while (temp > 0)
    {
        digits++;
        temp /= 10;
    }

    temp = n;
    while (temp > 0)
    {
        digit = temp % 10;

        power = 1;
        i = 0;
        while (i < digits)
        {
            power *= digit;
            i++;
        }

        sum += power;
        temp /= 10;
    }

    if (sum == original)
        printf("%d is an Armstrong number", original);
    else
        printf("%d is not an Armstrong number", original);

}