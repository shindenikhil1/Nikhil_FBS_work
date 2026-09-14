#include <stdio.h>
#include <string.h>

void main()
{
    char str1[] = "FirstBit";
    char str2[20];

    memcpy(str2, str1, strlen(str1) + 1);

    printf("Copied string = %s", str2);
}
