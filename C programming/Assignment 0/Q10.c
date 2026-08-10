#include <stdio.h>

int main() {
    int subject1 = 80;
    int subject2 = 75;
    int subject3 = 90;
    int subject4 = 85;
    int subject5 = 70;

    int total;
    float percentage;

    total = subject1 + subject2 + subject3 + subject4 + subject5;

    percentage = (total / 500.0) * 100;

    printf("Total Marks = %d\n", total);
    printf("Percentage = %.2f%%", percentage);

    return 0;
}