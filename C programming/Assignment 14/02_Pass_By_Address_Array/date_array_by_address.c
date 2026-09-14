#include <stdio.h>

struct date
{
    int date;
    int month;
    int year;
};

void store(struct date s[], int n)
{
    int i;

    for(i = 0; i < n; i++)
    {
        printf("\nRecord %d:\n", i + 1);
    printf("date = %d\n", s[i].date);
    printf("month = %d\n", s[i].month);
    printf("year = %d\n", s[i].year);
    }
}

void display(struct date s[], int n)
{
    int i;

    printf("\nDisplaying array of Date:\n");

    for(i = 0; i < n; i++)
    {
        printf("\nRecord %d:\n", i + 1);
    printf("date = %d\n", s[i].date);
    printf("month = %d\n", s[i].month);
    printf("year = %d\n", s[i].year);
    }
}

void main()
{
    struct date s[3] = {
        {9, 9, 2026},
        {10, 9, 2026},
        {11, 9, 2026}
    };

    store(s, 3);
    display(s, 3);
}
