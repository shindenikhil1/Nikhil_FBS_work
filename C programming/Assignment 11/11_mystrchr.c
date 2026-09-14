#include <stdio.h>

char* mystrchr(char *str, char ch)
{
    int i = 0;

    while(str[i] != '\0')
    {
        if(str[i] == ch)
            return &str[i];

        i++;
    }

    if(ch == '\0')
        return &str[i];

    return NULL;
}

void main()
{
    char str[] = "FirstBit";
    char ch = 'B';
    char *ptr;

    ptr = mystrchr(str, ch);

    if(ptr != NULL)
        printf("Character found = %c", *ptr);
    else
        printf("Character not found");
}
