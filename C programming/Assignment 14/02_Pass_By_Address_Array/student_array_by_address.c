#include <stdio.h>

struct student
{
    int rollNo;
    char name[30];
    float marks;
};

void store(struct student s[], int n)
{
    int i;

    for(i = 0; i < n; i++)
    {
        printf("\nRecord %d:\n", i + 1);
    printf("rollNo = %d\n", s[i].rollNo);
    printf("Name = %s\n", s[i].name);
    printf("marks = %.2f\n", s[i].marks);
    }
}

void display(struct student s[], int n)
{
    int i;

    printf("\nDisplaying array of Student:\n");

    for(i = 0; i < n; i++)
    {
        printf("\nRecord %d:\n", i + 1);
    printf("rollNo = %d\n", s[i].rollNo);
    printf("Name = %s\n", s[i].name);
    printf("marks = %.2f\n", s[i].marks);
    }
}

void main()
{
    struct student s[3] = {
        {101, "Amit", 85.50},
        {102, "Riya", 86.50},
        {103, "Sohan", 87.50}
    };

    store(s, 3);
    display(s, 3);
}
