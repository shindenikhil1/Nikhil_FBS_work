#include <stdio.h>

int checkVowelConsonant(char ch)
{
    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
       ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        return 1;
    else
        return 0;
}

void main()
{
    char ch = 'A';
    int result;

    result = checkVowelConsonant(ch);

    if(result == 1)
        printf("%c is a Vowel", ch);
    else
        printf("%c is a Consonant", ch);
}
