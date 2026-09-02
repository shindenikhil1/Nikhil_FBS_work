#include <stdio.h>

float calculateDiscount()
{
    float price = 700;
    char student = 'y';
    float discount;
    float finalPrice;

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

    return finalPrice;
}

void main()
{
    float result;

    result = calculateDiscount();

    printf("Final Price = %.2f", result);
}
