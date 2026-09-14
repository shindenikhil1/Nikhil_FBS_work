#include <stdio.h>

int mystrncmp(char *str1, char *str2, int n)
{
    int i;

    for(i = 0; i < n; i++)
    {
        if(str1[i] != str2[i] || str1[i] == '\0' || str2[i] == '\0')
            return str1[i] - str2[i];
    }

    return 0;
}

void main()
{
    char str1[] = "FirstBit";
    char str2[] = "FirstBox";
    int result;

    result = mystrncmp(str1, str2, 5);

    if(result == 0)
        printf("First 5 characters are equal");
    else
        printf("First 5 characters are not equal");
}
