#include <stdio.h>

int checkVowel()
{
    char ch = 'A';

    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
       ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        return 1;
    else
        return 0;
}

void main()
{
    int result;

    result = checkVowel();

    if(result == 1)
        printf("A is a Vowel");
    else
        printf("A is a Consonant");
}
