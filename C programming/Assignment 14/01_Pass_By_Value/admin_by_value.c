#include <stdio.h>

struct admin
{
    int id;
    char name[30];
    float salary;
    float allowance;
};

void store(struct admin s)
{
    printf("Stored Admin details:\n");
    printf("id = %d\n", s.id);
    printf("Name = %s\n", s.name);
    printf("salary = %.2f\n", s.salary);
    printf("allowance = %.2f\n", s.allowance);
}

void display(struct admin s)
{
    printf("\nAdmin details:\n");
    printf("id = %d\n", s.id);
    printf("Name = %s\n", s.name);
    printf("salary = %.2f\n", s.salary);
    printf("allowance = %.2f\n", s.allowance);
}

void main()
{
    struct admin s = {301, "Rahul", 50000, 8000};

    store(s);
    display(s);
}
