#include <stdio.h>

void main()
{
    char str[100];
    int index;
    int i;

    printf("Enter a non-empty string: ");
    scanf(" %[^\n]", str);

    printf("Enter index to remove: ");
    scanf("%d", &index);

    for(i = index; str[i] != '\0'; i++)
        str[i] = str[i + 1];

    printf("Result = %s", str);
}
