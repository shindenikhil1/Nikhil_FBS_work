#include <stdio.h>

void checkVotingEligibility(int age)
{
    if(age >= 18)
        printf("Eligible for voting");
    else
        printf("Not eligible for voting");
}

void main()
{
    int age = 20;

    checkVotingEligibility(age);
}
