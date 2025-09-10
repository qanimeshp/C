#include <stdio.h>

int main() {
    int choice, candidate1 = 0, candidate2 = 0, candidate3 = 0;
    char cont = 'y';

    while (cont == 'y' || cont == 'Y') {
        printf("\nVoting Menu:\n");
        printf("1. Candidate 1\n");
        printf("2. Candidate 2\n");
        printf("3. Candidate 3\n");
        printf("Enter your vote (1-3): ");
        scanf("%d", &choice);

        if (choice == 1)
            candidate1++;
        else if (choice == 2)
            candidate2++;
        else if (choice == 3)
            candidate3++;
        else
            printf("Invalid vote!\n");

        printf("Do you want to continue voting? (y/n): ");
        scanf(" %c", &cont);  
    }

    printf("\nVoting Results:\n");
    printf("Candidate 1: %d votes\n", candidate1);
    printf("Candidate 2: %d votes\n", candidate2);
    printf("Candidate 3: %d votes\n", candidate3);

    return 0;
}
