#include <stdio.h>
#include <string.h>

void main()
{
    char str[] = "FirstBit";
    char ch = 'B';
    char *ptr;

    ptr = strchr(str, ch);

    if(ptr != NULL)
        printf("Character found = %c", *ptr);
    else
        printf("Character not found");
}
