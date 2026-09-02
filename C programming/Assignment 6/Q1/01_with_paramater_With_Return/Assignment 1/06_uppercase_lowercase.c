#include <stdio.h>

int checkCase(char ch)
{
    if(ch >= 'A' && ch <= 'Z')
        return 1;
    else if(ch >= 'a' && ch <= 'z')
        return 2;
    else
        return 0;
}

void main()
{
    char ch = 'G';
    int result;

    result = checkCase(ch);

    if(result == 1)
        printf("%c is Uppercase", ch);
    else if(result == 2)
        printf("%c is Lowercase", ch);
    else
        printf("%c is not an alphabet", ch);
}
