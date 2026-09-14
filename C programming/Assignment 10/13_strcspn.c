#include <stdio.h>
#include <string.h>

void main()
{
    char str[] = "FirstBit123";
    char reject[] = "0123456789";

    printf("Characters before digit = %lu", strcspn(str, reject));
}
