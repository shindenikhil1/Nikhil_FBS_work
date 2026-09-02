#include <stdio.h>

int checkPalindrome(int n)
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
        return 1;
    else
        return 0;
}

void main()
{
    int n = 121;
    int result;

    result = checkPalindrome(n);

    if(result == 1)
        printf("Palindrome");
    else
        printf("Not Palindrome");
}
