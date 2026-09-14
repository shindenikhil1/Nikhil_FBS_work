#include <stdio.h>

char* mystrcat(char *dest, char *src)
{
    int i = 0;
    int j = 0;

    while(dest[i] != '\0')
        i++;

    while(src[j] != '\0')
    {
        dest[i] = src[j];
        i++;
        j++;
    }

    dest[i] = '\0';

    return dest;
}

void main()
{
    char str1[30] = "First";
    char str2[] = "Bit";

    mystrcat(str1, str2);

    printf("Concatenated string = %s", str1);
}
