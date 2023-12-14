#include <iostream>
#include <vector>

using namespace std;

// Function to display the Tic-Tac-Toe board
void displayBoard(const vector<vector<char>>& board) {
    for (const auto& row : board) {
        for (char cell : row) {
            cout << cell << " ";
        }
        cout << endl;
    }
}

// Function to check if a player has won
bool checkWin(const vector<vector<char>>& board, char player) {
    // Check rows and columns
    for (int i = 0; i < 3; ++i) {
        if ((board[i][0] == player && board[i][1] == player && board[i][2] == player) ||
            (board[0][i] == player && board[1][i] == player && board[2][i] == player)) {
            return true;
        }
    }

    // Check diagonals
    if ((board[0][0] == player && board[1][1] == player && board[2][2] == player) ||
        (board[0][2] == player && board[1][1] == player && board[2][0] == player)) {
        return true;
    }

    return false;
}

// Function to check if the game is a draw
bool checkDraw(const vector<vector<char>>& board) {
    for (const auto& row : board) {
        for (char cell : row) {
            if (cell == ' ') {
                return false; // If there is an empty cell, the game is not a draw
            }
        }
    }
    return true;
}

int main() {
    char currentPlayer = 'X';
    vector<vector<char>> board(3, vector<char>(3, ' '));
    bool gameWon = false;
    bool gameDraw = false;

    do {
        // Display the current state of the board
        cout << "Current Board:" << endl;
        displayBoard(board);

        // Player input
        int row, col;
        cout << "Player " << currentPlayer << ", enter your move (row and column): ";
        cin >> row >> col;

        // Check if the move is valid
        if (row >= 1 && row <= 3 && col >= 1 && col <= 3 && board[row - 1][col - 1] == ' ') {
            // Update the board
            board[row - 1][col - 1] = currentPlayer;

            // Check for a win
            gameWon = checkWin(board, currentPlayer);

            // Check for a draw
            if (!gameWon) {
                gameDraw = checkDraw(board);
            }

            // Switch players
            currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
        } else {
            cout << "Invalid move. Try again." << endl;
        }

    } while (!gameWon && !gameDraw);

    // Display the final state of the board
    cout << "Final Board:" << endl;
    displayBoard(board);

    // Display the result of the game
    if (gameWon) {
        cout << "Player " << currentPlayer << " wins!" << endl;
    } else {
        cout << "It's a draw!" << endl;
    }

    return 0;
}
