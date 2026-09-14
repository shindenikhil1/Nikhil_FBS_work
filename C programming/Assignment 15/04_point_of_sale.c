#include <stdio.h>

struct Product
{
    char name[30];
    float price;
    int quantity;
};

void main()
{
    struct Product p[10];
    int n;
    int i;
    float total = 0;

    printf("Enter number of products: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("\nEnter Product %d details\n", i + 1);

        printf("Name: ");
        scanf("%s", p[i].name);

        printf("Price: ");
        scanf("%f", &p[i].price);

        printf("Quantity: ");
        scanf("%d", &p[i].quantity);
    }

    printf("\nShopping Cart\n");

    for(i = 0; i < n; i++)
    {
        printf("%s = %.2f x %d = %.2f\n",
               p[i].name,
               p[i].price,
               p[i].quantity,
               p[i].price * p[i].quantity);

        total = total + p[i].price * p[i].quantity;
    }

    printf("\nTotal Cost = %.2f", total);
}
