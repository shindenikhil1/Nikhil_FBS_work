#include <stdio.h>

char* mystrncpy(char *dest, char *src, int n)
{
    int i;

    for(i = 0; i < n && src[i] != '\0'; i++)
        dest[i] = src[i];

    while(i < n)
    {
        dest[i] = '\0';
        i++;
    }

    return dest;
}

void main()
{
    char str1[] = "FirstBitSolutions";
    char str2[20];

    mystrncpy(str2, str1, 8);

    printf("Copied string = %s", str2);
}
