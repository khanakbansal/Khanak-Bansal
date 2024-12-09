#include <stdio.h>

char gameBoard[3][3];
char currentPlayer = 'X';

void initializeGameBoard() {
    for (int row = 0; row < 3; row++) {
        for (int col = 0; col < 3; col++) {
            gameBoard[row][col] = ' ';
        }
    }
}

void displayGameBoard() {
    printf("\n");
    for (int row = 0; row < 3; row++) {
        for (int col = 0; col < 3; col++) {
            printf(" %c ", gameBoard[row][col]);
            if (col < 2) printf("|");
        }
        if (row < 2) printf("\n---|---|---\n");
    }
    printf("\n");
}

int isWinner() {
    for (int row = 0; row < 3; row++) {
        if (gameBoard[row][0] == currentPlayer && gameBoard[row][1] == currentPlayer && gameBoard[row][2] == currentPlayer)
            return 1;
        if (gameBoard[0][row] == currentPlayer && gameBoard[1][row] == currentPlayer && gameBoard[2][row] == currentPlayer)
            return 1;
    }
    if (gameBoard[0][0] == currentPlayer && gameBoard[1][1] == currentPlayer && gameBoard[2][2] == currentPlayer)
        return 1;
    if (gameBoard[0][2] == currentPlayer && gameBoard[1][1] == currentPlayer && gameBoard[2][0] == currentPlayer)
        return 1;

    return 0;
}

int isDraw() {
    for (int row = 0; row < 3; row++) {
        for (int col = 0; col < 3; col++) {
            if (gameBoard[row][col] == ' ')
                return 0;
        }
    }
    return 1;
}

void switchCurrentPlayer() {
    currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
}

void makePlayerMove() {
    int row, col;
    while (1) {
        printf("Player %c, enter your move (row and column): ", currentPlayer);
        scanf("%d %d", &row, &col);
        if (row >= 1 && row <= 3 && col >= 1 && col <= 3 && gameBoard[row - 1][col - 1] == ' ') {
            gameBoard[row - 1][col - 1] = currentPlayer;
            break;
        } else {
            printf("Invalid move! Try again.\n");
        }
    }
}

int main() {
    initializeGameBoard();
    while (1) {
        displayGameBoard();
        makePlayerMove();
        if (isWinner()) {
            displayGameBoard();
            printf("Player %c wins!\n", currentPlayer);
            break;
        }
        if (isDraw()) {
            displayGameBoard();
            printf("It's a draw!\n");
            break;
        }
        switchCurrentPlayer();
    }

    return 0;
}