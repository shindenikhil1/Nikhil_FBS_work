#include <stdio.h>

struct hr
{
    int id;
    char name[30];
    float salary;
    float commission;
};

void store(struct hr *s)
{
    printf("Stored HR details:\n");
    printf("id = %d\n", (*s).id);
    printf("Name = %s\n", (*s).name);
    printf("salary = %.2f\n", (*s).salary);
    printf("commission = %.2f\n", (*s).commission);
}

void display(struct hr *s)
{
    printf("\nHR details:\n");
    printf("id = %d\n", (*s).id);
    printf("Name = %s\n", (*s).name);
    printf("salary = %.2f\n", (*s).salary);
    printf("commission = %.2f\n", (*s).commission);
}

void main()
{
    struct hr s = {1, "nikhil", 900000,1000};

    store(&s);
    display(&s);
}
