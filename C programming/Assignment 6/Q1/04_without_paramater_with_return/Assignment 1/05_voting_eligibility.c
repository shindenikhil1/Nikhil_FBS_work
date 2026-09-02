#include <stdio.h>

int checkVotingEligibility()
{
    int age = 20;

    if(age >= 18)
        return 1;
    else
        return 0;
}

void main()
{
    int result;

    result = checkVotingEligibility();

    if(result == 1)
        printf("Eligible for voting");
    else
        printf("Not eligible for voting");
}
