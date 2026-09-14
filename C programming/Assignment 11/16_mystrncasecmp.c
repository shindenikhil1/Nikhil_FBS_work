#include <stdio.h>

char toLowerCase(char ch)
{
    if(ch >= 'A' && ch <= 'Z')
        return ch + 32;

    return ch;
}

int mystrncasecmp(char *str1, char *str2, int n)
{
    int i;
    char ch1, ch2;

    for(i = 0; i < n; i++)
    {
        ch1 = toLowerCase(str1[i]);
        ch2 = toLowerCase(str2[i]);

        if(ch1 != ch2 || ch1 == '\0' || ch2 == '\0')
            return ch1 - ch2;
    }

    return 0;
}

void main()
{
    char str1[] = "FIRSTBit";
    char str2[] = "firstbox";
    int result;

    result = mystrncasecmp(str1, str2, 5);

    if(result == 0)
        printf("First 5 characters are equal");
    else
        printf("First 5 characters are not equal");
}
