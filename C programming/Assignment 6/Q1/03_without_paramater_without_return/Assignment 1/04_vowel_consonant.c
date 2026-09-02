#include <stdio.h>

void checkVowelConsonant()
{
    char ch = 'A';

    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
       ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        printf("%c is a Vowel", ch);
    else
        printf("%c is a Consonant", ch);
}

void main()
{
    checkVowelConsonant();
}
