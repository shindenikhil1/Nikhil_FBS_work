#include <stdio.h>

int checkPalindrome(int no)
{
    int temp, rem;
    int reverse = 0;

    temp = no;

    while(no > 0)
    {
        rem = no % 10;
        reverse = reverse * 10 + rem;
        no = no / 10;
    }

    if(temp == reverse)
        return 1;
    else
        return 0;
}

void main()
{
    int no = 121;
    int result;

    result = checkPalindrome(no);

    if(result == 1)
        printf("%d is a Palindrome number", no);
    else
        printf("%d is not a Palindrome number", no);
}
