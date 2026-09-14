#include <stdio.h>

struct hr
{
    int id;
    char name[30];
    float salary;
    float commission;
};

void store(struct hr s[], int n)
{
    int i;

    for(i = 0; i < n; i++)
    {
        printf("\nRecord %d:\n", i + 1);
    printf("id = %d\n", s[i].id);
    printf("Name = %s\n", s[i].name);
    printf("salary = %.2f\n", s[i].salary);
    printf("commission = %.2f\n", s[i].commission);
    }
}

void display(struct hr s[], int n)
{
    int i;

    printf("\nDisplaying array of HR:\n");

    for(i = 0; i < n; i++)
    {
        printf("\nRecord %d:\n", i + 1);
    printf("id = %d\n", s[i].id);
    printf("Name = %s\n", s[i].name);
    printf("salary = %.2f\n", s[i].salary);
    printf("commission = %.2f\n", s[i].commission);
    }
}

void main()
{
    struct hr s[3] = {
        {401, "Amit", 55000.00, 5000.00},
        {402, "Riya", 55001.00, 5001.00},
        {403, "Sohan", 55002.00, 5002.00}
    };

    store(s, 3);
    display(s, 3);
}
