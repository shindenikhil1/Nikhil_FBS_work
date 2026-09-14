#include <stdio.h>

struct employee
{
    int id;
    char name[30];
    float salary;
};

void store(struct employee *s)
{
    printf("Stored Employee details:\n");
    printf("id = %d\n", (*s).id);
    printf("Name = %s\n", (*s).name);
    printf("salary = %.2f\n", (*s).salary);
}

void display(struct employee *s)
{
    printf("\nEmployee details:\n");
    printf("id = %d\n", (*s).id);
    printf("Name = %s\n", (*s).name);
    printf("salary = %.2f\n", (*s).salary);
}

void main()
{
    struct employee s = {11, "nikhil", 66999};

    store(&s);
    display(&s);
}
