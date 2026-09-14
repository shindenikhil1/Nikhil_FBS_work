#include <stdio.h>

struct product
{
    int id;
    char name[30];
    int quantity;
    float price;
};

void store(struct product s[], int n)
{
    int i;

    for(i = 0; i < n; i++)
    {
        printf("\nRecord %d:\n", i + 1);
    printf("id = %d\n", s[i].id);
    printf("Name = %s\n", s[i].name);
    printf("quantity = %d\n", s[i].quantity);
    printf("price = %.2f\n", s[i].price);
    }
}

void display(struct product s[], int n)
{
    int i;

    printf("\nDisplaying array of Product:\n");

    for(i = 0; i < n; i++)
    {
        printf("\nRecord %d:\n", i + 1);
    printf("id = %d\n", s[i].id);
    printf("Name = %s\n", s[i].name);
    printf("quantity = %d\n", s[i].quantity);
    printf("price = %.2f\n", s[i].price);
    }
}

void main()
{
    struct product s[3] = {
        {1001, "Amit", 5, 65000.00},
        {1002, "Riya", 5, 65001.00},
        {1003, "Sohan", 5, 65002.00}
    };

    store(s, 3);
    display(s, 3);
}
