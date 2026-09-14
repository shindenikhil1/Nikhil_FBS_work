#include <stdio.h>
#include <string.h>

void main()
{
    char str[] = "Learn FirstBit C";
    char sub[] = "FirstBit";
    char *ptr;

    ptr = strstr(str, sub);

    if(ptr != NULL)
        printf("Substring found = %s", ptr);
    else
        printf("Substring not found");
}
