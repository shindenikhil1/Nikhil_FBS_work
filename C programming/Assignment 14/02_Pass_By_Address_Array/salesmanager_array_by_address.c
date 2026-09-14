#include <stdio.h>

struct salesmanager
{
    int id;
    char name[30];
    float salary;
    float incentive;
    float target;
};

void store(struct salesmanager s[], int n)
{
    int i;

    for(i = 0; i < n; i++)
    {
        printf("\nRecord %d:\n", i + 1);
    printf("id = %d\n", s[i].id);
    printf("Name = %s\n", s[i].name);
    printf("salary = %.2f\n", s[i].salary);
    printf("incentive = %.2f\n", s[i].incentive);
    printf("target = %.2f\n", s[i].target);
    }
}

void display(struct salesmanager s[], int n)
{
    int i;

    printf("\nDisplaying array of SalesManager:\n");

    for(i = 0; i < n; i++)
    {
        printf("\nRecord %d:\n", i + 1);
    printf("id = %d\n", s[i].id);
    printf("Name = %s\n", s[i].name);
    printf("salary = %.2f\n", s[i].salary);
    printf("incentive = %.2f\n", s[i].incentive);
    printf("target = %.2f\n", s[i].target);
    }
}

void main()
{
    struct salesmanager s[3] = {
        {501, "Amit", 60000.00, 10000.00, 500000.00},
        {502, "Riya", 60001.00, 10001.00, 500001.00},
        {503, "Sohan", 60002.00, 10002.00, 500002.00}
    };

    store(s, 3);
    display(s, 3);
}
