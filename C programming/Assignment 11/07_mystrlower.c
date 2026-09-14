#include <stdio.h>

char* mystrlower(char *str)
{
    int i = 0;

    while(str[i] != '\0')
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] + 32;

        i++;
    }

    return str;
}

void main()
{
    char str[] = "FIRSTBIT";

    mystrlower(str);

    printf("Lowercase = %s", str);
}
