#include <stdio.h>

struct salesmanager
{
    int id;
    char name[30];
    float salary;
    float incentive;
    float target;
};

void store(struct salesmanager *s)
{
    printf("Stored SalesManager details:\n");
    printf("id = %d\n", (*s).id);
    printf("Name = %s\n", (*s).name);
    printf("salary = %.2f\n", (*s).salary);
    printf("incentive = %.2f\n", (*s).incentive);
    printf("target = %.2f\n", (*s).target);
}

void display(struct salesmanager *s)
{
    printf("\nSalesManager details:\n");
    printf("id = %d\n", (*s).id);
    printf("Name = %s\n", (*s).name);
    printf("salary = %.2f\n", (*s).salary);
    printf("incentive = %.2f\n", (*s).incentive);
    printf("target = %.2f\n", (*s).target);
}

void main()
{
    struct salesmanager s = {01, "rahul", 50000,10000, 887786};

    store(&s);
    display(&s);
}
