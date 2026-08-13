#include <stdio.h>

void main() {
    char ch = 'N';

    if (ch >= 'A' && ch <= 'Z') {
        printf("Character is Uppercase");
    } else if (ch >= 'a' && ch <= 'z') {
        printf("Character is Lowercase");
    } else {
        printf("Character is Not an Alphabet");
    }
}