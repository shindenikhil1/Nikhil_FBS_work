#include <stdio.h>
#include <string.h>

void main()
{
    char str[] = "12345abc";
    char accept[] = "0123456789";

    printf("Initial digits = %lu", strspn(str, accept));
}
