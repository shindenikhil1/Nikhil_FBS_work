#include <stdio.h>

void main()
{
    char str[100];
    char ch;
    int i;
    int found = 0;

    printf("Enter a string: ");
    scanf(" %[^\n]", str);

    printf("Enter a character: ");
    scanf(" %c", &ch);

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == ch)
        {
            found = 1;
            break;
        }
    }

    if(found == 1)
        printf("Character found");
    else
        printf("Character not found");
}
