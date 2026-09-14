#include <stdio.h>

char* mystrnstr(char *str, char *sub, int n)
{
    int i, j;

    for(i = 0; i < n && str[i] != '\0'; i++)
    {
        j = 0;

        while(str[i + j] == sub[j] &&
              sub[j] != '\0' &&
              i + j < n)
        {
            j++;
        }

        if(sub[j] == '\0')
            return &str[i];
    }

    return NULL;
}

void main()
{
    char str[] = "FirstBit Solutions";
    char sub[] = "Bit";
    char *ptr;

    ptr = mystrnstr(str, sub, 9);

    if(ptr != NULL)
        printf("Substring found = %s", ptr);
    else
        printf("Substring not found");
}
