#include <stdio.h>

int main() {
    int votesA = 0, votesB = 0;
    int voters, choice;

    printf("Enter number of voters: ");
    scanf("%d", &voters);

    for (int i = 1; i <= voters; i++) {
        printf("\nVoter %d, choose your candidate:\n", i);
        printf("1. Candidate A\n");
        printf("2. Candidate B\n");
        printf("Enter your vote: ");
        scanf("%d", &choice);

        printf("Recording");
        for (int j = 0; j < 3; j++) { // simple loader
            printf(".");
            fflush(stdout);
            sleep(1);
        }
        printf("\n");

        if (choice == 1) votesA++;
        else if (choice == 2) votesB++;
        else printf("Invalid vote!\n");
    }

    printf("\n--- Voting Results ---\n");
    printf("Candidate A: %d votes\n", votesA);
    printf("Candidate B: %d votes\n", votesB);

    if (votesA > votesB) printf("Winner: Candidate A 🎉\n");
    else if (votesB > votesA) printf("Winner: Candidate B 🎉\n");
    else printf("It's a Tie! ⚖️\n");

    return 0;
}
