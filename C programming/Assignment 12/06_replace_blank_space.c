#include <stdio.h>

void main()
{
    char str[100];
    char symbol = '@';
    int i;

    printf("Enter a string: ");
    scanf(" %[^\n]", str);

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == ' ')
            str[i] = symbol;
    }

    printf("Result = %s", str);
}
