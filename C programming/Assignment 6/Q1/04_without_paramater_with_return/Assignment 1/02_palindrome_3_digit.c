#include <stdio.h>

int checkPalindrome()
{
    int no = 121;
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
    int result;

    result = checkPalindrome();

    if(result == 1)
        printf("121 is a Palindrome number");
    else
        printf("121 is not a Palindrome number");
}
