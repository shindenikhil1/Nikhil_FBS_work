#include <stdio.h>

float calculateSalary()
{
    float basic = 6000;
    float da, ta, hra;
    float totalSalary;

    if(basic <= 5000)
    {
        da = basic * 10 / 100;
        ta = basic * 20 / 100;
        hra = basic * 25 / 100;
    }
    else
    {
        da = basic * 15 / 100;
        ta = basic * 25 / 100;
        hra = basic * 30 / 100;
    }

    totalSalary = basic + da + ta + hra;

    return totalSalary;
}

void main()
{
    float result;

    result = calculateSalary();

    printf("Total Salary = %.2f", result);
}
