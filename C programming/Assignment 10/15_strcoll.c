#include <stdio.h>
#include <string.h>

void main()
{
    char str1[] = "Apple";
    char str2[] = "Banana";
    int result;

    result = strcoll(str1, str2);

    if(result == 0)
        printf("Strings are equal");
    else if(result < 0)
        printf("str1 comes before str2");
    else
        printf("str1 comes after str2");
}
