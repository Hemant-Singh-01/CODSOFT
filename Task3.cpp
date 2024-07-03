#include <iostream>

const int SIZE = 3;
char board[SIZE][SIZE] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};

void displayBoard() {
    std::cout << "Current board:\n";
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            std::cout << board[i][j] << "  |  ";
        }
        std::cout << "\n________________\n             \n";
    }
}

bool makeMove(int player) {
    char mark = (player == 1) ? 'X' : 'O';
    int choice;
    std::cout << "Player " << player << ", enter the number of the cell you want to mark: ";
    std::cin >> choice;

    int row = (choice - 1) / SIZE;
    int col = (choice - 1) % SIZE;

    if (board[row][col] != 'X' && board[row][col] != 'O') {
        board[row][col] = mark;
        return true;
    } else {
        std::cout << "Cell already marked. Try again.\n";
        return false;
    }
}

bool checkWin() {
    for (int i = 0; i < SIZE; ++i) {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2]) return true;
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i]) return true;
    }
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2]) return true;
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0]) return true;
    return false;
}

bool checkDraw() {
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            if (board[i][j] != 'X' && board[i][j] != 'O') {
                return false;
            }
        }
    }
    return true;
}

int main() {
    int player = 1;
    bool gameWon = false;

    while (!gameWon && !checkDraw()) {
        displayBoard();
        if (makeMove(player)) {
            gameWon = checkWin();
            if (gameWon) {
                displayBoard();
                std::cout << "Player " << player << " wins!\n";
            } else if (checkDraw()) {
                displayBoard();
                std::cout << "The game is a draw!\n";
            } else {
                player = (player == 1) ? 2 : 1;
            }
        }
    }

    return 0;
}
