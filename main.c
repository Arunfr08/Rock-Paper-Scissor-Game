#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int getuserChoice() {
    int choice = 0;
    
    while (choice < 1 || choice > 3) {
        printf("Choose any one option => ");
        printf("1. ROCK\n");
        printf("2. PAPER\n");
        printf("3. SCISSOR\n");
        printf("Enter your Choice : ");
        
        if (scanf("%d", &choice) != 1) {
            printf("\nInvalid input! Please enter a number.\n\n");
            while (getchar() != '\n') {
                choice = 0;
            }
        }

    }

    return choice;
}

int getComputerChoice() {
    return (rand() % 3) + 1;
}

void CheckWinner(int userChoice, int computerChoice) {
    if (userChoice == computerChoice) {
        printf("It's a Tie");
    } else if((userChoice == 1 && computerChoice == 3) ||
              (userChoice == 2 && computerChoice == 1) ||
              (userChoice == 3  && computerChoice == 2)
            ) {
                printf("You Won!!\n");
            }
    else {
        printf("You Lose!!\n");
    }
}

int main() {

    srand(time(NULL));

    printf("*** Rock - Paper - Scissor ***\n");
    int userChoice = getuserChoice();
    int computerChoice = getComputerChoice();

    switch (userChoice)
    {
    case 1:
        printf("You chose Rock!\n");
        break;
    case 2:
        printf("You chose Paper!\n");
        break;
    case 3:
        printf("You chose Scissor!\n");
        break;
    }

    switch (computerChoice)
    {
    case 1:
        printf("Computer chose Rock!\n");
        break;
    case 2:
        printf("Computer chose Paper!\n");
        break;
    case 3:
        printf("Computer chose Scissor!\n");
        break;
    }

    CheckWinner(userChoice,computerChoice);

    return 0;
}



