#include <stdio.h>

char* mystrstr(char *str, char *sub)
{
    int i, j;

    for(i = 0; str[i] != '\0'; i++)
    {
        j = 0;

        while(str[i + j] == sub[j] && sub[j] != '\0')
            j++;

        if(sub[j] == '\0')
            return &str[i];
    }

    return NULL;
}

void main()
{
    char str[] = "Learn FirstBit C";
    char sub[] = "FirstBit";
    char *ptr;

    ptr = mystrstr(str, sub);

    if(ptr != NULL)
        printf("Substring found = %s", ptr);
    else
        printf("Substring not found");
}
