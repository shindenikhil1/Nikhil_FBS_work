#include <stdio.h>

struct admin
{
    int id;
    char name[30];
    float salary;
    float allowance;
};

void store(struct admin s[], int n)
{
    int i;

    for(i = 0; i < n; i++)
    {
        printf("\nRecord %d:\n", i + 1);
    printf("id = %d\n", s[i].id);
    printf("Name = %s\n", s[i].name);
    printf("salary = %.2f\n", s[i].salary);
    printf("allowance = %.2f\n", s[i].allowance);
    }
}

void display(struct admin s[], int n)
{
    int i;

    printf("\nDisplaying array of Admin:\n");

    for(i = 0; i < n; i++)
    {
        printf("\nRecord %d:\n", i + 1);
    printf("id = %d\n", s[i].id);
    printf("Name = %s\n", s[i].name);
    printf("salary = %.2f\n", s[i].salary);
    printf("allowance = %.2f\n", s[i].allowance);
    }
}

void main()
{
    struct admin s[3] = {
        {301, "Amit", 50000.00, 8000.00},
        {302, "Riya", 50001.00, 8001.00},
        {303, "Sohan", 50002.00, 8002.00}
    };

    store(s, 3);
    display(s, 3);
}
