#include <stdio.h>

void main()
{
    int no = 121;
    int first, middle, last;

    first = no / 100;
    middle = (no / 10) % 10;
    last = no % 10;

    if (first == last)
    {
        printf("Number is Palindrome");
    }
    else
    {
        printf("Number is Not Palindrome");
    }
}