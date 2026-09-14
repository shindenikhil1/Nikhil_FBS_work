#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_PLAYERS 100

typedef struct Player
{
    int jerseyNumber;
    char name[50];
    int runs;
    int wickets;
    int matchesPlayed;
} Player;

void addPlayer(Player players[], int *no);
void removePlayer(Player players[], int *no);
void searchPlayer(Player players[], int *no);
void updatePlayer(Player players[], int *no);
void displayPlayers(Player players[], int *no);
void displaySortedPlayers(Player players[], int *no);

void displayOnePlayer(Player player)
{
    printf("\nJersey Number : %d", player.jerseyNumber);
    printf("\nName          : %s", player.name);
    printf("\nRuns          : %d", player.runs);
    printf("\nWickets       : %d", player.wickets);
    printf("\nMatches Played: %d\n", player.matchesPlayed);
}

void addPlayer(Player players[], int *no)
{
    int numPlayers;

    printf("\nHow many players do you want to add? ");
    scanf("%d", &numPlayers);

    if (numPlayers <= 0)
    {
        printf("Invalid number of players.\n");
        return;
    }

    if (*no + numPlayers > MAX_PLAYERS)
    {
        printf("Cannot add players. Maximum limit is %d.\n", MAX_PLAYERS);
        return;
    }

    for (int i = 0; i < numPlayers; i++)
    {
        printf("\nEnter details for player %d:\n", *no + 1);

        printf("Jersey Number: ");
        scanf("%d", &players[*no].jerseyNumber);
        int duplicate = 0;

        for (int j = 0; j < *no; j++)
        {
            if (players[j].jerseyNumber == players[*no].jerseyNumber)
            {
                duplicate = 1;
                break;
            }
        }

        if (duplicate)
        {
            printf("Jersey number already exists. Player not added.\n");
            i--;
            continue;
        }

        printf("Name: ");
        scanf(" %49[^\n]", players[*no].name);

        printf("Runs: ");
        scanf("%d", &players[*no].runs);

        printf("Wickets: ");
        scanf("%d", &players[*no].wickets);

        printf("Matches Played: ");
        scanf("%d", &players[*no].matchesPlayed);

        (*no)++;

        printf("Player added successfully.\n");
    }
}

void removePlayer(Player players[], int *no)
{
    int jr;

    if (*no == 0)
    {
        printf("\nNo players available.\n");
        return;
    }

    printf("\nEnter the Player's Jersey Number you want to remove: ");
    scanf("%d", &jr);

    for (int i = 0; i < *no; i++)
    {
        if (players[i].jerseyNumber == jr)
        {
            for (int j = i; j < *no - 1; j++)
            {
                players[j] = players[j + 1];
            }

            (*no)--;

            printf("Player removed successfully.\n");
            return;
        }
    }

    printf("Player with Jersey Number %d not found.\n", jr);
}

void searchPlayer(Player players[], int *no)
{
    int searchjersey;
    char searchname[50];
    char method_search;

    if (*no == 0)
    {
        printf("\nNo players available.\n");
        return;
    }

    printf("\nFor search using Jersey Number press 'j'");
    printf("\nFor search using Name press 'n'");
    printf("\nEnter choice: ");

    scanf(" %c", &method_search);

    if (method_search == 'j' || method_search == 'J')
    {
        printf("Enter the Jersey Number to search: ");
        scanf("%d", &searchjersey);

        for (int i = 0; i < *no; i++)
        {
            if (players[i].jerseyNumber == searchjersey)
            {
                printf("\nPlayer Found!");
                displayOnePlayer(players[i]);
                return;
            }
        }
    }
    else if (method_search == 'n' || method_search == 'N')
    {
        printf("Enter the Player Name to search: ");
        scanf(" %49[^\n]", searchname);

        for (int i = 0; i < *no; i++)
        {
            if (strcmp(players[i].name, searchname) == 0)
            {
                printf("\nPlayer Found!");
                displayOnePlayer(players[i]);
                return;
            }
        }
    }
    else
    {
        printf("Invalid search option.\n");
        return;
    }

    printf("\nPlayer not found.\n");
}

void updatePlayer(Player players[], int *no)
{
    int jr;
    int choice;

    if (*no == 0)
    {
        printf("\nNo players available.\n");
        return;
    }

    printf("\nEnter Jersey Number of player to update: ");
    scanf("%d", &jr);

    for (int i = 0; i < *no; i++)
    {
        if (players[i].jerseyNumber == jr)
        {
            printf("\nPlayer Found:");
            displayOnePlayer(players[i]);

            printf("\nWhat do you want to update?");
            printf("\n1. Runs");
            printf("\n2. Wickets");
            printf("\n3. Matches Played");
            printf("\n4. Update All");
            printf("\nEnter choice: ");
            scanf("%d", &choice);

            switch (choice)
            {
                case 1:
                    printf("Enter new Runs: ");
                    scanf("%d", &players[i].runs);
                    break;

                case 2:
                    printf("Enter new Wickets: ");
                    scanf("%d", &players[i].wickets);
                    break;

                case 3:
                    printf("Enter new Matches Played: ");
                    scanf("%d", &players[i].matchesPlayed);
                    break;

                case 4:
                    printf("Enter new Runs: ");
                    scanf("%d", &players[i].runs);

                    printf("Enter new Wickets: ");
                    scanf("%d", &players[i].wickets);

                    printf("Enter new Matches Played: ");
                    scanf("%d", &players[i].matchesPlayed);
                    break;

                default:
                    printf("Invalid choice.\n");
                    return;
            }

            printf("Player updated successfully.\n");
            return;
        }
    }

    printf("Player with Jersey Number %d not found.\n", jr);
}

void displayPlayers(Player players[], int *no)
{
    if (*no == 0)
    {
        printf("\nNo players available.\n");
        return;
    }

    printf("\nPLAYER LIST \n");

    for (int i = 0; i < *no; i++)
    {
        printf("\nPlayer %d", i + 1);
        displayOnePlayer(players[i]);
    }
}


void displaySortedPlayers(Player players[], int *no)
{
    if (*no == 0)
    {
        printf("\nNo players available.\n");
        return;
    }

    Player temp[MAX_PLAYERS];
    int choice;

    for (int i = 0; i < *no; i++)
    {
        temp[i] = players[i];
    }

    printf("\nSORT OPTIONS\n");
    printf("1. Maximum Runs\n");
    printf("2. Minimum Runs\n");
    printf("3. Maximum Wickets\n");
    printf("4. Minimum Wickets\n");
    printf("5. Top 3 Players by Runs\n");
    printf("6. Top 3 Players by Wickets\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    if (choice == 1 || choice == 2 || choice == 5)
    {
        for (int i = 0; i < *no - 1; i++)
        {
            for (int j = 0; j < *no - i - 1; j++)
            {
                if (choice == 1 || choice == 5)
                {
                    if (temp[j].runs < temp[j + 1].runs)
                    {
                        Player t = temp[j];
                        temp[j] = temp[j + 1];
                        temp[j + 1] = t;
                    }
                }
                else
                {
                    if (temp[j].runs > temp[j + 1].runs)
                    {
                        Player t = temp[j];
                        temp[j] = temp[j + 1];
                        temp[j + 1] = t;
                    }
                }
            }
        }

        if (choice == 5)
        {
            int limit = (*no < 3) ? *no : 3;

            printf("\nTOP %d PLAYERS BY RUNS\n", limit);

            for (int i = 0; i < limit; i++)
            {
                printf("\nRank %d", i + 1);
                displayOnePlayer(temp[i]);
            }
        }
        else
        {
            printf("\nSORTED BY RUNS\n");

            for (int i = 0; i < *no; i++)
            {
                displayOnePlayer(temp[i]);
            }
        }
    }

    else if (choice == 3 || choice == 4 || choice == 6)
    {
        for (int i = 0; i < *no - 1; i++)
        {
            for (int j = 0; j < *no - i - 1; j++)
            {
                if (choice == 3 || choice == 6)
                {
                    if (temp[j].wickets < temp[j + 1].wickets)
                    {
                        Player t = temp[j];
                        temp[j] = temp[j + 1];
                        temp[j + 1] = t;
                    }
                }
                else
                {
                    if (temp[j].wickets > temp[j + 1].wickets)
                    {
                        Player t = temp[j];
                        temp[j] = temp[j + 1];
                        temp[j + 1] = t;
                    }
                }
            }
        }

        if (choice == 6)
        {
            int limit = (*no < 3) ? *no : 3;

            printf("\nTOP %d PLAYERS BY WICKETS\n", limit);

            for (int i = 0; i < limit; i++)
            {
                printf("\nRank %d", i + 1);
                displayOnePlayer(temp[i]);
            }
        }
        else
        {
            printf("\nSORTED BY WICKETS\n");

            for (int i = 0; i < *no; i++)
            {
                displayOnePlayer(temp[i]);
            }
        }
    }
    else
    {
        printf("Invalid sorting option.\n");
    }
}

void main()
{
    Player players[MAX_PLAYERS];
    int playerCount = 0;
    int operation;

    printf("   PLAYER MANAGEMENT SYSTEM\n");
    while (1)
    {
        printf("\n\n========== MENU ==========\n");
        printf("1. Add Player\n");
        printf("2. Remove Player\n");
        printf("3. Search Player\n");
        printf("4. Update Player\n");
        printf("5. Display Sorted Players\n");
        printf("6. Display All Players\n");
        printf("7. Exit\n");

        printf("\nEnter operation (1-7): ");
        scanf("%d", &operation);

        switch (operation)
        {
            case 1:
                addPlayer(players, &playerCount);
                break;

            case 2:
                removePlayer(players, &playerCount);
                break;

            case 3:
                searchPlayer(players, &playerCount);
                break;

            case 4:
                updatePlayer(players, &playerCount);
                break;

            case 5:
                displaySortedPlayers(players, &playerCount);
                break;

            case 6:
                displayPlayers(players, &playerCount);
                break;

            case 7:
                printf("\nExiting the program...\n");
                exit(0);

            default:
                printf("\nInvalid operation! Please enter 1-7.\n");
        }
    }
}