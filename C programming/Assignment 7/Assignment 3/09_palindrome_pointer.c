#include <stdio.h>

void checkPalindrome(int *n)
{
    int no, temp, rem;
    int reverse = 0;

    no = *n;
    temp = no;

    while(no > 0)
    {
        rem = no % 10;
        reverse = reverse * 10 + rem;
        no = no / 10;
    }

    if(temp == reverse)
        printf("Palindrome");
    else
        printf("Not Palindrome");
}

void main()
{
    int n = 121;

    checkPalindrome(&n);
}
