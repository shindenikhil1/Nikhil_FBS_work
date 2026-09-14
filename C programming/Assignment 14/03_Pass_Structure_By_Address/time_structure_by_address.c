#include <stdio.h>

struct time
{
    int hour;
    int min;
    int sec;
};

void store(struct time *s)
{
    printf("Stored Time details:\n");
    printf("hour = %d\n", (*s).hour);
    printf("min = %d\n", (*s).min);
    printf("sec = %d\n", (*s).sec);
}

void display(struct time *s)
{
    printf("\nTime details:\n");
    printf("hour = %d\n", (*s).hour);
    printf("min = %d\n", (*s).min);
    printf("sec = %d\n", (*s).sec);
}

void main()
{
    struct time s = {12,12,12};

    store(&s);
    display(&s);
}
