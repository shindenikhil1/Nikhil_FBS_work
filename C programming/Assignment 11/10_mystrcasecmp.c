#include <stdio.h>

char toLower(char ch)
{
    if(ch >= 'A' && ch <= 'Z')
        return ch + 32;

    return ch;
}

int mystrcasecmp(char *str1, char *str2)
{
    int i = 0;
    char ch1, ch2;

    while(str1[i] != '\0' || str2[i] != '\0')
    {
        ch1 = toLower(str1[i]);
        ch2 = toLower(str2[i]);

        if(ch1 != ch2)
            return ch1 - ch2;

        i++;
    }

    return 0;
}

void main()
{
    char str1[] = "FIRSTBIT";
    char str2[] = "firstbit";
    int result;

    result = mystrcasecmp(str1, str2);

    if(result == 0)
        printf("Strings are equal");
    else
        printf("Strings are not equal");
}
