#include <stdio.h>

char* mystrrev(char *str)
{
    int i = 0;
    int j = 0;
    char temp;

    while(str[j] != '\0')
        j++;

    j--;

    while(i < j)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;

        i++;
        j--;
    }

    return str;
}

void main()
{
    char str[] = "FirstBit";

    mystrrev(str);

    printf("Reverse = %s", str);
}
