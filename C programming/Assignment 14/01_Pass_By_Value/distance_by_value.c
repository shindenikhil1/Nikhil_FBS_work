#include <stdio.h>

struct distance
{
    int feet;
    float inch;
};

void store(struct distance s)
{
    printf("Stored Distance details:\n");
    printf("feet = %d\n", s.feet);
    printf("inch = %.2f\n", s.inch);
}

void display(struct distance s)
{
    printf("\nDistance details:\n");
    printf("feet = %d\n", s.feet);
    printf("inch = %.2f\n", s.inch);
}

void main()
{
    struct distance s = {12, 6.5};

    store(s);
    display(s);
}
