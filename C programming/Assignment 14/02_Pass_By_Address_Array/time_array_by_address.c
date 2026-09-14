#include <stdio.h>

struct time
{
    int hour;
    int min;
    int sec;
};

void store(struct time s[], int n)
{
    int i;

    for(i = 0; i < n; i++)
    {
        printf("\nRecord %d:\n", i + 1);
    printf("hour = %d\n", s[i].hour);
    printf("min = %d\n", s[i].min);
    printf("sec = %d\n", s[i].sec);
    }
}

void display(struct time s[], int n)
{
    int i;

    printf("\nDisplaying array of Time:\n");

    for(i = 0; i < n; i++)
    {
        printf("\nRecord %d:\n", i + 1);
    printf("hour = %d\n", s[i].hour);
    printf("min = %d\n", s[i].min);
    printf("sec = %d\n", s[i].sec);
    }
}

void main()
{
    struct time s[3] = {
        {10, 30, 45},
        {11, 30, 45},
        {12, 30, 45}
    };

    store(s, 3);
    display(s, 3);
}
