#include <stdio.h>
#include <string.h>

void main()
{
    char str1[] = "First";
    char str2[] = "First";
    int result;

    result = memcmp(str1, str2, 5);

    if(result == 0)
        printf("Memory blocks are equal");
    else
        printf("Memory blocks are not equal");
}
