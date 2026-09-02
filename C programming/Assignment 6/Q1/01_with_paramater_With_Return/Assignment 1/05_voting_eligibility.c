#include <stdio.h>

int checkVotingEligibility(int age)
{
    if(age >= 18)
        return 1;
    else
        return 0;
}

void main()
{
    int age = 20;
    int result;

    result = checkVotingEligibility(age);

    if(result == 1)
        printf("Eligible for voting");
    else
        printf("Not eligible for voting");
}
