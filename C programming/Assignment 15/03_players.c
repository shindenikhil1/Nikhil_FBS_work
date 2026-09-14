#include <stdio.h>

struct Player
{
    char name[30];
    int matches;
    int runs;
    int wickets;
};

void acceptPlayers(struct Player p[], int n)
{
    int i;

    for(i = 0; i < n; i++)
    {
        printf("\nEnter details of Player %d\n", i + 1);

        printf("Name: ");
        scanf("%s", p[i].name);

        printf("Matches Played: ");
        scanf("%d", &p[i].matches);

        printf("Runs: ");
        scanf("%d", &p[i].runs);

        printf("Wickets: ");
        scanf("%d", &p[i].wickets);
    }
}

void displayPlayers(struct Player p[], int n)
{
    int i;

    printf("\nAll Player Details\n");

    for(i = 0; i < n; i++)
    {
        printf("\nPlayer %d\n", i + 1);
        printf("Name = %s\n", p[i].name);
        printf("Matches = %d\n", p[i].matches);
        printf("Runs = %d\n", p[i].runs);
        printf("Wickets = %d\n", p[i].wickets);
    }
}

void displayMaximum(struct Player p[], int n)
{
    int i;
    int maxRunIndex = 0;
    int maxWicketIndex = 0;

    for(i = 1; i < n; i++)
    {
        if(p[i].runs > p[maxRunIndex].runs)
            maxRunIndex = i;

        if(p[i].wickets > p[maxWicketIndex].wickets)
            maxWicketIndex = i;
    }

    printf("\nPlayer with Maximum Runs\n");
    printf("Name = %s\n", p[maxRunIndex].name);
    printf("Runs = %d\n", p[maxRunIndex].runs);

    printf("\nPlayer with Maximum Wickets\n");
    printf("Name = %s\n", p[maxWicketIndex].name);
    printf("Wickets = %d", p[maxWicketIndex].wickets);
}

void main()
{
    struct Player p[10];

    acceptPlayers(p, 10);
    displayPlayers(p, 10);
    displayMaximum(p, 10);
}
