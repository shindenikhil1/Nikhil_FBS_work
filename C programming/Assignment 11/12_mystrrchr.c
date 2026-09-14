#include <stdio.h>

char* mystrrchr(char *str, char ch)
{
    int i = 0;
    char *last = NULL;

    while(str[i] != '\0')
    {
        if(str[i] == ch)
            last = &str[i];

        i++;
    }

    if(ch == '\0')
        return &str[i];

    return last;
}

void main()
{
    char str[] = "FirstBitBit";
    char ch = 'B';
    char *ptr;

    ptr = mystrrchr(str, ch);

    if(ptr != NULL)
        printf("Last occurrence = %s", ptr);
    else
        printf("Character not found");
}
