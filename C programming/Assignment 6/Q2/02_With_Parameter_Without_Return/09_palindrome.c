#include <stdio.h>

void checkPalindrome(int n)
{
    int temp, rem;
    int reverse = 0;

    temp = n;

    while(n > 0)
    {
        rem = n % 10;
        reverse = reverse * 10 + rem;
        n = n / 10;
    }

    if(temp == reverse)
        printf("Palindrome");
    else
        printf("Not Palindrome");
}

void main()
{
    int n = 121;

    checkPalindrome(n);
}
