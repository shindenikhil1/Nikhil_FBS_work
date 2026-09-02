#include <stdio.h>

void checkCase(char *ch)
{
    if(*ch >= 'A' && *ch <= 'Z')
        printf("%c is Uppercase", *ch);
    else if(*ch >= 'a' && *ch <= 'z')
        printf("%c is Lowercase", *ch);
    else
        printf("%c is not an alphabet", *ch);
}

void main()
{
    char ch = 'G';

    checkCase(&ch);
}
