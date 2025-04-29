#include <stdio.h>

#define NUM_CANDIDATES 5

int main() 
{
    int count[NUM_CANDIDATES] = {0};
    int spoiltBallots = 0;

    int ballot;
    printf("Enter the candidate number (1 to 5) on each ballot (enter 0 to exit):\n");

    while (1) 
    {
        scanf("%d", &ballot);

        if (ballot == 0) 
        {
            break; 
        } 
        else if (ballot < 1 || ballot > NUM_CANDIDATES) 
        {
            spoiltBallots++; //like 6,7,8,9.....
        } 
        else 
        {
            count[ballot - 1]++; 
        }
        /*as i start loop at 0 index so when i input 3 that means candidates: 3 will taken the vote
        but the problem is here candidates 3 is here at 2 index cause i start loop at 0 index
        so i substract 1 at every time to avoide the problem
        input 5 means it store 4 index which is candidates 5*/
    }

    printf("\nVote Counts:\n");
    for (int i = 0; i < NUM_CANDIDATES; i++) 
    {
        printf("Candidate %d: %d votes\n", i + 1, count[i]);
    }

    printf("Spoilt Ballots: %d\n", spoiltBallots);

    return 0;
}
