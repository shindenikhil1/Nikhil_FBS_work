#include <stdio.h>

struct Time
{
    int hrs;
    int min;
    int sec;
};

void main()
{
    struct Time t1, t2, result;
    int totalSec;

    printf("Enter first time\n");

    printf("Hours: ");
    scanf("%d", &t1.hrs);

    printf("Minutes: ");
    scanf("%d", &t1.min);

    printf("Seconds: ");
    scanf("%d", &t1.sec);

    printf("\nEnter second time\n");

    printf("Hours: ");
    scanf("%d", &t2.hrs);

    printf("Minutes: ");
    scanf("%d", &t2.min);

    printf("Seconds: ");
    scanf("%d", &t2.sec);

    result.sec = t1.sec + t2.sec;
    result.min = t1.min + t2.min;
    result.hrs = t1.hrs + t2.hrs;

    if(result.sec >= 60)
    {
        result.sec = result.sec - 60;
        result.min++;
    }

    if(result.min >= 60)
    {
        result.min = result.min - 60;
        result.hrs++;
    }

    printf("\nAdded Time = %d:%d:%d\n",
           result.hrs, result.min, result.sec);

    totalSec = result.hrs * 3600 + result.min * 60 + result.sec;

    printf("Added Time in seconds = %d", totalSec);
}
