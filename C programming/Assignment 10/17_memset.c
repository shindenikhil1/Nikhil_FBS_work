#include <stdio.h>
#include <string.h>

void main()
{
    char str[20] = "FirstBit";

    memset(str, '*', 5);

    printf("After memset = %s", str);
}
