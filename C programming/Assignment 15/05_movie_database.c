#include <stdio.h>

struct Movie
{
    char title[30];
    char director[30];
    int year;
    char genre[20];
};

void main()
{
    struct Movie m[10];
    int n;
    int i;
    int choice;
    int searchYear;
    int found;

    printf("Enter number of movies: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("\nEnter Movie %d details\n", i + 1);

        printf("Title: ");
        scanf("%s", m[i].title);

        printf("Director: ");
        scanf("%s", m[i].director);

        printf("Release Year: ");
        scanf("%d", &m[i].year);

        printf("Genre: ");
        scanf("%s", m[i].genre);
    }

    printf("\n1. Display Movies\n");
    printf("2. Search Movie by Year\n");
    printf("3. Update Movie\n");
    printf("Enter Choice: ");
    scanf("%d", &choice);

    if(choice == 1)
    {
        for(i = 0; i < n; i++)
        {
            printf("\nMovie %d\n", i + 1);
            printf("Title = %s\n", m[i].title);
            printf("Director = %s\n", m[i].director);
            printf("Year = %d\n", m[i].year);
            printf("Genre = %s\n", m[i].genre);
        }
    }
    else if(choice == 2)
    {
        printf("Enter release year: ");
        scanf("%d", &searchYear);

        found = 0;

        for(i = 0; i < n; i++)
        {
            if(m[i].year == searchYear)
            {
                printf("\nMovie Found\n");
                printf("Title = %s\n", m[i].title);
                printf("Director = %s\n", m[i].director);
                printf("Year = %d\n", m[i].year);
                printf("Genre = %s\n", m[i].genre);

                found = 1;
            }
        }

        if(found == 0)
            printf("Movie not found");
    }
    else if(choice == 3)
    {
        printf("Enter movie number to update: ");
        scanf("%d", &i);

        if(i >= 1 && i <= n)
        {
            i--;

            printf("Enter New Title: ");
            scanf("%s", m[i].title);

            printf("Enter New Director: ");
            scanf("%s", m[i].director);

            printf("Enter New Release Year: ");
            scanf("%d", &m[i].year);

            printf("Enter New Genre: ");
            scanf("%s", m[i].genre);

            printf("Movie updated successfully");
        }
        else
        {
            printf("Invalid movie number");
        }
    }
    else
    {
        printf("Invalid choice");
    }
}
