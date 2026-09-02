#include<stdio.h>
void main()
{
    int n;
    printf("enter the number till which you want to print the prime numbers: ");
    scanf("%d",&n);

    for(int i=2;i<=n;i++)
    {
        int flag=0;
        for(int j=2;j<i;j++)
        {
            if(i%j==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            printf("%d\n",i);
        }
    }
}