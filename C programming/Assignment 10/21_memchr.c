#include <stdio.h>
#include <string.h>

void main()
{
    char str[] = "FirstBit";
    char *ptr;

    ptr = (char *)memchr(str, 'B', strlen(str));

    if(ptr != NULL)
        printf("Character found = %c", *ptr);
    else
        printf("Character not found");
}
