#include <stdio.h>
#include <string.h>

void main()
{
    char str[] = "FirstBit Solutions Pune";
    char *token;

    token = strtok(str, " ");

    while(token != NULL)
    {
        printf("%s\n", token);
        token = strtok(NULL, " ");
    }
}
