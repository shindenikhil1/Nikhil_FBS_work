#include <stdio.h>

void main()
{
    int no,choice,rem, reverse, sum, count, temp;

    printf("Enter a number: ");
    scanf("%d", &no);
   
    printf("1. Check Even or Odd\n");
    printf("2. Check Prime or Not\n");
    printf("3. Check Palindrome or Not\n");
    printf("4. Check Positive, Negative or Zero\n");
    printf("5. Reverse a Number\n");
    printf("6. Find Sum of Digits\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1)
    {
        if (no % 2 == 0)
        {
            printf("Number is Even");
        }
        else
        {
            printf("Number is Odd");
        }
    }
    else if (choice == 2)
    {
        count = 0;

        for (int i = 1; i <= no; i++)
        {
            if (no % i == 0)
            {
                count++;
            }
        }

        if (count == 2)
        {
            printf("Number is Prime");
        }
        else
        {
            printf("Number is Not Prime");
        }
    }
    else if (choice == 3)
    {
        reverse = 0;
        temp = no;

        while (no > 0)
        {
            rem = no % 10;
            reverse = reverse * 10 + rem;
            no = no / 10;
        }

        if (temp == reverse)
        {
            printf("Number is Palindrome");
        }
        else
        {
            printf("Number is Not Palindrome");
        }
    }
    else if (choice == 4)
    {
        if (no > 0)
        {
            printf("Number is Positive");
        }
        else if (no < 0)
        {
            printf("Number is Negative");
        }
        else
        {
            printf("Number is Zero");
        }
    }
    else if (choice == 5)
    {
        reverse = 0;

        while (no > 0)
        {
            rem = no % 10;
            reverse = reverse * 10 + rem;
            no = no / 10;
        }

        printf("Reverse = %d", reverse);
    }
    else if (choice == 6)
    {
        sum = 0;

        while (no > 0)
        {
            rem = no % 10;
            sum = sum + rem;
            no = no / 10;
        }

        printf("Sum of Digits = %d", sum);
    }
    else
    {
        printf("Invalid Choice");
    }
}