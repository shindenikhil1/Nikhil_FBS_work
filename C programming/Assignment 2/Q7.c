#include<stdio.h>
void main()
{ 
    int age;
    printf("Enter your age: ");
    scanf("%d",&age);   
    if (age<12 && age>0)
    {
        printf("You are a child");
    }
    else if (age>=12 && age<20)
    {
        printf("You are a teenager");
    }
    else if (age>=20 && age<60)
    {
        printf("You are an adult");
    }
    else if (age>=60)
    {
        printf("You are a senior citizen");
    }
    else
    {
        printf("Invalid age");
    }
    
}