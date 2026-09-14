#include <stdio.h>
#include <string.h>

void main()
{
    char str1[] = "FirstBit";
    char str2[20];

    strcpy(str2, str1);

    printf("Copied string = %s", str2);
}
