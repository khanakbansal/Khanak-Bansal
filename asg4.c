#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <ctype.h>

int main() {
    srand(time(0));
    char *aiMove;
    char playerMove[15];
    int randomValue = rand() % 101;

    if (randomValue < 33)
        aiMove = "Rock";
    else if (randomValue < 66)
        aiMove = "Paper";
    else
        aiMove = "Scissors";

    printf("Computer chose: %s\n", aiMove);

    printf("Let's Play Rock, Paper, Scissors:\n");
    printf("Type Rock, Paper, or Scissors: ");
    scanf("%s", playerMove);

    for (int i = 0; playerMove[i]; i++) {
        playerMove[i] = tolower(playerMove[i]);
    }

    if (strcmp(playerMove, "rock") == 0) {
        if (strcmp(aiMove, "Paper") == 0) {
            printf("\nYou Lost! AI chose Paper!!!\n");
        } else if (strcmp(aiMove, "Scissors") == 0) {
            printf("\nYou Won!! AI chose Scissors!!!\n");
        } else {
            printf("\nIt's a Tie! You both chose Rock!!!\n");
        }
    } else if (strcmp(playerMove, "paper") == 0) {
        if (strcmp(aiMove, "Scissors") == 0) {
            printf("\nYou Lost! AI chose Scissors!!!\n");
        } else if (strcmp(aiMove, "Rock") == 0) {
            printf("\nYou Won!! AI chose Rock!!!\n");
        } else {
            printf("\nIt's a Tie! You both chose Paper!!!\n");
        }
    } else if (strcmp(playerMove, "scissors") == 0) {
        if (strcmp(aiMove, "Rock") == 0) {
            printf("\nYou Lost! AI chose Rock!!!\n");
        } else if (strcmp(aiMove, "Paper") == 0) {
            printf("\nYou Won!! AI chose Paper!!!\n");
        } else {
            printf("\nIt's a Tie! You both chose Scissors!!!\n");
        }
    } else {
        printf("\nInvalid input. Please type Rock, Paper, or Scissors.\n");
    }

    return 0;
}