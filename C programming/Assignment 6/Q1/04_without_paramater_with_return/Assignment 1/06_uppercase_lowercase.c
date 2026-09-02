#include <stdio.h>

int checkCase()
{
    char ch = 'G';

    if(ch >= 'A' && ch <= 'Z')
        return 1;
    else if(ch >= 'a' && ch <= 'z')
        return 2;
    else
        return 0;
}

void main()
{
    int result;

    result = checkCase();

    if(result == 1)
        printf("G is Uppercase");
    else if(result == 2)
        printf("G is Lowercase");
    else
        printf("G is not an alphabet");
}
