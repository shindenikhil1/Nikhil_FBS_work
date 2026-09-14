#include <stdio.h>

struct Book
{
    char bname[30];
    int id;
    char author[30];
    float price;
};

void main()
{
    struct Book b;

    printf("Enter Book Name: ");
    scanf("%s", b.bname);

    printf("Enter Book ID: ");
    scanf("%d", &b.id);

    printf("Enter Author Name: ");
    scanf("%s", b.author);

    printf("Enter Price: ");
    scanf("%f", &b.price);

    printf("\nBook Details\n");
    printf("Book Name = %s\n", b.bname);
    printf("ID = %d\n", b.id);
    printf("Author = %s\n", b.author);
    printf("Price = %.2f", b.price);
}
