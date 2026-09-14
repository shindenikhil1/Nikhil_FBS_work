#include <stdio.h>

char* mystrncat(char *dest, char *src, int n)
{
    int i = 0;
    int j = 0;

    while(dest[i] != '\0')
        i++;

    while(src[j] != '\0' && j < n)
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
    char str1[30] = "FirstBit";
    char str2[] = " Solutions";

    mystrncat(str1, str2, 9);

    printf("Concatenated string = %s", str1);
}
