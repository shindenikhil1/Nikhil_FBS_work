#include <stdio.h>
#include <string.h>

void main()
{
    char str[] = "FirstBitBit";
    char ch = 'B';
    char *ptr;

    ptr = strrchr(str, ch);

    if(ptr != NULL)
        printf("Last occurrence = %s", ptr);
    else
        printf("Character not found");
}
