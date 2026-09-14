#include <stdio.h>

char* mystrcpy(char *dest, char *src)
{
    int i = 0;

    while(src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }

    dest[i] = '\0';

    return dest;
}

void main()
{
    char str1[] = "FirstBit";
    char str2[20];

    mystrcpy(str2, str1);

    printf("Copied string = %s", str2);
}
