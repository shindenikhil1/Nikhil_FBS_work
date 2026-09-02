#include<stdio.h>
void main()
{
    int no, i;
    printf("Enter a number: ");
    scanf("%d",&no);
    i = 1;
    while (i <= 10)
    {
        printf("%d  ", no * i);
        i++;
    }
}