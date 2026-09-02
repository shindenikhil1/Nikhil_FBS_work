#include <stdio.h>

void calculateDiscount()
{
    float price = 700;
    float discount = 0;
    float finalPrice;
    char student = 'y';

    if(student == 'y' || student == 'Y')
    {
        if(price > 500)
            discount = price * 20 / 100;
        else
            discount = price * 10 / 100;
    }
    else
    {
        if(price > 600)
            discount = price * 15 / 100;
        else
            discount = 0;
    }

    finalPrice = price - discount;

    printf("Price = %.2f\n", price);
    printf("Discount = %.2f\n", discount);
    printf("Final Price = %.2f", finalPrice);
}

void main()
{
    calculateDiscount();
}
