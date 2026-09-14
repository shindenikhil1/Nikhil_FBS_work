#include <stdio.h>

struct employee
{
    int id;
    char name[30];
    float salary;
};

void store(struct employee s[], int n)
{
    int i;

    for(i = 0; i < n; i++)
    {
        printf("\nRecord %d:\n", i + 1);
    printf("id = %d\n", s[i].id);
    printf("Name = %s\n", s[i].name);
    printf("salary = %.2f\n", s[i].salary);
    }
}

void display(struct employee s[], int n)
{
    int i;

    printf("\nDisplaying array of Employee:\n");

    for(i = 0; i < n; i++)
    {
        printf("\nRecord %d:\n", i + 1);
    printf("id = %d\n", s[i].id);
    printf("Name = %s\n", s[i].name);
    printf("salary = %.2f\n", s[i].salary);
    }
}

void main()
{
    struct employee s[3] = {
        {201, "Amit", 45000.00},
        {202, "Riya", 45001.00},
        {203, "Sohan", 45002.00}
    };

    store(s, 3);
    display(s, 3);
}
