#include <stdio.h>
#include <string.h>

void main()
{
    char str1[30] = "First";
    char str2[] = "Bit";

    strcat(str1, str2);

    printf("Concatenated string = %s", str1);
}
