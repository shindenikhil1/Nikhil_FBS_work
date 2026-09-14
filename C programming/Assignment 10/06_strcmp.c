#include <stdio.h>
#include <string.h>

void main()
{
    char str1[] = "First";
    char str2[] = "First";
    int result;

    result = strcmp(str1, str2);

    if(result == 0)
        printf("Strings are equal");
    else if(result < 0)
        printf("str1 is smaller than str2");
    else
        printf("str1 is greater than str2");
}
