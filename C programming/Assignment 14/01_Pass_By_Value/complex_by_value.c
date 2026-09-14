#include <stdio.h>

struct complex
{
    float real;
    float imaginary;
};

void store(struct complex s)
{
    printf("Stored Complex details:\n");
    printf("real = %.2f\n", s.real);
    printf("imaginary = %.2f\n", s.imaginary);
}

void display(struct complex s)
{
    printf("\nComplex details:\n");
    printf("real = %.2f\n", s.real);
    printf("imaginary = %.2f\n", s.imaginary);
}

void main()
{
    struct complex s = {5.5, 3.2};

    store(s);
    display(s);
}
