#include <stdio.h>
void main()
{
    int num, isPrime = 1;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    if (num <= 1)
    {
        isPrime = 0;
    } 
    else
    {
        int i = 2;
        while (i * i <= num)
        {
            if (num % i == 0)
            {
                isPrime = 0;
                break;
            }
            i++;
        }
    }
    if (isPrime == 1) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }
}