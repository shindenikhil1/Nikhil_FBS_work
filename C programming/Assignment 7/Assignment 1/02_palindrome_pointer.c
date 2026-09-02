#include <stdio.h>

void checkPalindrome(int *no)
{
    int temp, rem;
    int reverse = 0;

    temp = *no;

    while(*no > 0)
    {
        rem = *no % 10;
        reverse = reverse * 10 + rem;
        *no = *no / 10;
    }

    if(temp == reverse)
        printf("%d is a Palindrome number", temp);
    else
        printf("%d is not a Palindrome number", temp);
}

void main()
{
    int no = 121;

    checkPalindrome(&no);
}
