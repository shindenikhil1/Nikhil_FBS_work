#include <stdio.h>

void main()
{
    char str[100];
    char temp;
    int i = 0;

    printf("Enter a string: ");
    scanf(" %[^\n]", str);

    while(str[i] != '\0')
        i++;

    if(i > 1)
    {
        temp = str[0];
        str[0] = str[i - 1];
        str[i - 1] = temp;
    }

    printf("Result = %s", str);
}
