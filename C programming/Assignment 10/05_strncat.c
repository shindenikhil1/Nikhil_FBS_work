#include <stdio.h>
#include <string.h>

void main()
{
    char str1[30] = "FirstBit";
    char str2[] = " Solutions";

    strncat(str1, str2, 9);

    printf("Concatenated string = %s", str1);
}
