#include <stdio.h>

void main()
{
    char str[100];
    int i, j;
    int flag = 1;

    printf("Enter a string: ");
    scanf(" %[^\n]", str);

    i = 0;

    while(str[i] != '\0')
        i++;

    j = i - 1;
    i = 0;

    while(i < j)
    {
        if(str[i] != str[j])
        {
            flag = 0;
            break;
        }

        i++;
        j--;
    }

    if(flag == 1)
        printf("Palindrome");
    else
        printf("Not Palindrome");
}
