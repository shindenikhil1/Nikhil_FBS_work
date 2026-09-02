#include <stdio.h>

void menuProgram(int no, int choice)
{
    int temp, rem, reverse, sum;
    int i, count;

    printf("1. Check Even or Odd\n");
    printf("2. Check Prime or Not\n");
    printf("3. Check Palindrome or Not\n");
    printf("4. Check Positive, Negative or Zero\n");
    printf("5. Reverse a Number\n");
    printf("6. Sum of Digits\n");

    printf("\nChoice = %d\n", choice);
    printf("Number = %d\n\n", no);

    if(choice == 1)
    {
        if(no % 2 == 0)
            printf("Even");
        else
            printf("Odd");
    }
    else if(choice == 2)
    {
        count = 0;

        for(i = 1; i <= no; i++)
        {
            if(no % i == 0)
                count++;
        }

        if(count == 2)
            printf("Prime");
        else
            printf("Not Prime");
    }
    else if(choice == 3)
    {
        temp = no;
        reverse = 0;

        while(no > 0)
        {
            rem = no % 10;
            reverse = reverse * 10 + rem;
            no = no / 10;
        }

        if(temp == reverse)
            printf("Palindrome");
        else
            printf("Not Palindrome");
    }
    else if(choice == 4)
    {
        if(no > 0)
            printf("Positive");
        else if(no < 0)
            printf("Negative");
        else
            printf("Zero");
    }
    else if(choice == 5)
    {
        reverse = 0;

        while(no > 0)
        {
            rem = no % 10;
            reverse = reverse * 10 + rem;
            no = no / 10;
        }

        printf("Reverse = %d", reverse);
    }
    else if(choice == 6)
    {
        sum = 0;

        while(no > 0)
        {
            rem = no % 10;
            sum = sum + rem;
            no = no / 10;
        }

        printf("Sum of digits = %d", sum);
    }
    else
    {
        printf("Invalid choice");
    }
}

void main()
{
    int no = 121;
    int choice = 1;

    menuProgram(no, choice);
}
