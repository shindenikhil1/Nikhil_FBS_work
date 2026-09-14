#include <stdio.h>
#include <string.h>

void main()
{
    char str1[] = "FirstBitSolutions";
    char str2[20];

    strncpy(str2, str1, 8);
    str2[8] = '\0';

    printf("Copied string = %s", str2);
}
