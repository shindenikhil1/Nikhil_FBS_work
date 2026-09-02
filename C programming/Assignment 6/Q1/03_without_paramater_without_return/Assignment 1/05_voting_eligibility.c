#include <stdio.h>

void checkVotingEligibility()
{
    int age = 20;

    if(age >= 18)
        printf("Eligible for voting");
    else
        printf("Not eligible for voting");
}

void main()
{
    checkVotingEligibility();
}
