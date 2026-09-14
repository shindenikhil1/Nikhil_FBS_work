#include <stdio.h>

struct date
{
    int date;
    int month;
    int year;
};

void store(struct date *s)
{
    printf("Stored Date details:\n");
    printf("date = %d\n", (*s).date);
    printf("month = %d\n", (*s).month);
    printf("year = %d\n", (*s).year);
}

void display(struct date *s)
{
    printf("\nDate details:\n");
    printf("date = %d\n", (*s).date);
    printf("month = %d\n", (*s).month);
    printf("year = %d\n", (*s).year);
}

void main()
{
    struct date s = {12,12,12};

    store(&s);
    display(&s);
}
