#include <stdio.h>

struct student
{
    int rollNo;
    char name[30];
    float marks;
};

void store(struct student s)
{
    printf("Stored Student details:\n");
    printf("rollNo = %d\n", s.rollNo);
    printf("Name = %s\n", s.name);
    printf("marks = %.2f\n", s.marks);
}

void display(struct student s)
{
    printf("\nStudent details:\n");
    printf("rollNo = %d\n", s.rollNo);
    printf("Name = %s\n", s.name);
    printf("marks = %.2f\n", s.marks);
}

void main()
{
    struct student s = {101, "Nikhil", 85.5};

    store(s);
    display(s);
}
