#include <stdio.h>
#include <string.h>

void main()
{
    char str1[] = "FirstBit";
    char str2[] = "FirstBox";
    int result;

    result = strncmp(str1, str2, 5);

    if(result == 0)
        printf("First 5 characters are equal");
    else
        printf("First 5 characters are not equal");
}
