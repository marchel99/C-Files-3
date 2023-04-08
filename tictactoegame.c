#include <stdio.h>

char board[3][3]; // 3x3 board

// Initialize the board with empty spaces
void init_board() {
    int i, j;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            board[i][j] = ' ';
        }
    }
}

// Display the board
void display_board() {
    printf(" %c | %c | %c \n", board[0][0], board[0][1], board[0][2]);
    printf("---+---+---\n");
    printf(" %c | %c | %c \n", board[1][0], board[1][1], board[1][2]);
    printf("---+---+---\n");
    printf(" %c | %c | %c \n", board[2][0], board[2][1], board[2][2]);
}

// Get the move from the player
void get_move(int *row, int *col) {
    printf("Enter row and column (1-3): ");
    scanf("%d %d", row, col);
    *row -= 1; // convert to 0-based indexing
    *col -= 1;
}

// Check if the move is valid
int is_valid_move(int row, int col) {
    if (row < 0 || row > 2 || col < 0 || col > 2) {
        return 0; // out of range
    }
    if (board[row][col] != ' ') {
        return 0; // not empty
    }
    return 1; // valid move
}

// Check if the game is over
int is_game_over() {
    int i, j;
    // check rows
    for (i = 0; i < 3; i++) {
        if (board[i][0] != ' ' && board[i][0] == board[i][1] && board[i][1] == board[i][2]) {
            return 1; // game over
        }
    }
    // check columns
    for (j = 0; j < 3; j++) {
        if (board[0][j] != ' ' && board[0][j] == board[1][j] && board[1][j] == board[2][j]) {
            return 1; // game over
        }
    }
    // check diagonals
    if (board[0][0] != ' ' && board[0][0] == board[1][1] && board[1][1] == board[2][2]) {
        return 1; // game over
    }
    if (board[0][2] != ' ' && board[0][2] == board[1][1] && board[1][1] == board[2][0]) {
        return 1; // game over
    }
    // check if board is full
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (board[i][j] == ' ') {
                return 0; // game not over
            }
        }
    }
    return 2; // draw
}

// Main function
int main() {
    int row, col, player = 1, winner = 0
return 0;
}