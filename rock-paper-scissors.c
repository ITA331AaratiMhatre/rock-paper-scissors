#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function to generate computer's choice
int generateComputerChoice() {
    // Generate a random number between 0 and 2
    return rand() % 3;
}

// Function to determine the winner
void determineWinner(int userChoice, int computerChoice) {
    if (userChoice == computerChoice) {
        printf("It's a tie!\n");
    } else if ((userChoice == 0 && computerChoice == 2) || 
               (userChoice == 1 && computerChoice == 0) || 
               (userChoice == 2 && computerChoice == 1)) {
        printf("You win!\n");
    } else {
        printf("Computer wins!\n");
    }
}

int main() {
    int userChoice, computerChoice;

    // Initialize random seed
    srand(time(NULL));

    printf("Let's play Rock-Paper-Scissors!\n");
    printf("Choose one:\n");
    printf("0 - Rock\n");
    printf("1 - Paper\n");
    printf("2 - Scissors\n");
    printf("Your choice: ");
    scanf("%d", &userChoice);

    // Validate user input
    if (userChoice < 0 || userChoice > 2) {
        printf("Invalid choice! Please choose a number between 0 and 2.\n");
        return 1;
    }

    // Generate computer's choice
    computerChoice = generateComputerChoice();

    // Display choices
    printf("You chose: ");
    switch (userChoice) {
        case 0:
            printf("Rock\n");
            break;
        case 1:
            printf("Paper\n");
            break;
        case 2:
            printf("Scissors\n");
            break;
    }
    printf("Computer chose: ");
    switch (computerChoice) {
        case 0:
            printf("Rock\n");
            break;
        case 1:
            printf("Paper\n");
            break;
        case 2:
            printf("Scissors\n");
            break;
    }

    // Determine the winner
    determineWinner(userChoice, computerChoice);

    return 0;
}
