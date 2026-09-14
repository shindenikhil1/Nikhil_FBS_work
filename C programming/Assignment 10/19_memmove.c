#include <stdio.h>
#include <string.h>

void main()
{
    char str[] = "FirstBit";

    memmove(str + 2, str, 5);

    printf("After memmove = %s", str);
}
