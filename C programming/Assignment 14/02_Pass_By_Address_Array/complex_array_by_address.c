#include <stdio.h>

struct complex
{
    float real;
    float imaginary;
};

void store(struct complex s[], int n)
{
    int i;

    for(i = 0; i < n; i++)
    {
        printf("\nRecord %d:\n", i + 1);
    printf("real = %.2f\n", s[i].real);
    printf("imaginary = %.2f\n", s[i].imaginary);
    }
}

void display(struct complex s[], int n)
{
    int i;

    printf("\nDisplaying array of Complex:\n");

    for(i = 0; i < n; i++)
    {
        printf("\nRecord %d:\n", i + 1);
    printf("real = %.2f\n", s[i].real);
    printf("imaginary = %.2f\n", s[i].imaginary);
    }
}

void main()
{
    struct complex s[3] = {
        {5.50, 3.20},
        {6.50, 4.20},
        {7.50, 5.20}
    };

    store(s, 3);
    display(s, 3);
}
