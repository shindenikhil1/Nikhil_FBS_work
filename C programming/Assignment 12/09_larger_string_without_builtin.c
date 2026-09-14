#include <stdio.h>

int mystrlen(char str[])
{
    int i = 0;

    while(str[i] != '\0')
        i++;

    return i;
}

void main()
{
    char str1[100];
    char str2[100];
    int len1, len2;

    printf("Enter first string: ");
    scanf(" %[^\n]", str1);

    printf("Enter second string: ");
    scanf(" %[^\n]", str2);

    len1 = mystrlen(str1);
    len2 = mystrlen(str2);

    if(len1 > len2)
        printf("Larger string = %s", str1);
    else if(len2 > len1)
        printf("Larger string = %s", str2);
    else
        printf("Both strings have same length");
}
