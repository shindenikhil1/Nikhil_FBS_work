#include <stdio.h>

struct distance
{
    int feet;
    float inch;
};

void store(struct distance s[], int n)
{
    int i;

    for(i = 0; i < n; i++)
    {
        printf("\nRecord %d:\n", i + 1);
    printf("feet = %d\n", s[i].feet);
    printf("inch = %.2f\n", s[i].inch);
    }
}

void display(struct distance s[], int n)
{
    int i;

    printf("\nDisplaying array of Distance:\n");

    for(i = 0; i < n; i++)
    {
        printf("\nRecord %d:\n", i + 1);
    printf("feet = %d\n", s[i].feet);
    printf("inch = %.2f\n", s[i].inch);
    }
}

void main()
{
    struct distance s[3] = {
        {12, 6.50},
        {13, 7.50},
        {14, 8.50}
    };

    store(s, 3);
    display(s, 3);
}
