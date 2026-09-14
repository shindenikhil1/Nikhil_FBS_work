#include <stdio.h>
#include <string.h>

void main()
{
    char str1[] = "FirstBit";
    char str2[20];
    size_t len;

    len = strxfrm(str2, str1, sizeof(str2));

    if(len < sizeof(str2))
        printf("Transformed string = %s", str2);
    else
        printf("Buffer too small");
}
