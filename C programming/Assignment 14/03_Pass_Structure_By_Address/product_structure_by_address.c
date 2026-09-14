#include <stdio.h>

struct product
{
    int id;
    char name[30];
    int quantity;
    float price;
};

void store(struct product *s)
{
    printf("Stored Product details:\n");
    printf("id = %d\n", (*s).id);
    printf("Name = %s\n", (*s).name);
    printf("quantity = %d\n", (*s).quantity);
    printf("price = %.2f\n", (*s).price);
}

void display(struct product *s)
{
    printf("\nProduct details:\n");
    printf("id = %d\n", (*s).id);
    printf("Name = %s\n", (*s).name);
    printf("quantity = %d\n", (*s).quantity);
    printf("price = %.2f\n", (*s).price);
}

void main()
{
    struct product s = {1001, "Laptop", 5, 65000};

    store(&s);
    display(&s);
}
