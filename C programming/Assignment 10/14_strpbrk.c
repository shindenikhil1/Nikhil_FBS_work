#include <stdio.h>
#include <string.h>

void main()
{
    char str[] = "FirstBit";
    char search[] = "xyzB";
    char *ptr;

    ptr = strpbrk(str, search);

    if(ptr != NULL)
        printf("First matching character = %c", *ptr);
    else
        printf("No matching character");
}
