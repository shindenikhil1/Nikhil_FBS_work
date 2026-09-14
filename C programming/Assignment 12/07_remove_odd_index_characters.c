#include <stdio.h>

void main()
{
    char str[100];
    int i;
    int j = 0;

    printf("Enter a string: ");
    scanf(" %[^\n]", str);

    for(i = 0; str[i] != '\0'; i = i + 2)
    {
        str[j] = str[i];
        j++;
    }

    str[j] = '\0';

    printf("Result = %s", str);
}
