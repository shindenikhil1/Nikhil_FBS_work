#include <stdio.h>
void main()
{
    int n, original, reverse = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;

    while (n > 0)
    {
        digit = n % 10;
        reverse = reverse * 10 + digit;
        n = n / 10;
    }

    if (reverse == original)
    {
        printf("%d is a Palindrome Number", original);
    }
    else
    {
        printf("%d is not a Palindrome Number", original);
    }

}