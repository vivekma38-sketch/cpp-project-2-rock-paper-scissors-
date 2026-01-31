#include <iostream>
using namespace std;

const int ROWS = 6;
const int COLS = 7;

char board[ROWS][COLS];

// Board initialize
void initBoard() {
    for(int i = 0; i < ROWS; i++)
        for(int j = 0; j < COLS; j++)
            board[i][j] = '.';
}

// Board print
void printBoard() {
    cout << "\n";
    for(int i = 0; i < ROWS; i++) {
        for(int j = 0; j < COLS; j++) {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
    for(int j = 1; j <= COLS; j++)
        cout << j << " ";
    cout << endl;
}

// Token drop
bool dropToken(int col, char player) {
    for(int i = ROWS - 1; i >= 0; i--) {
        if(board[i][col] == '.') {
            board[i][col] = player;
            return true;
        }
    }
    return false;
}

// Win check
bool checkWin(char p) {
    // Horizontal
    for(int i = 0; i < ROWS; i++)
        for(int j = 0; j < COLS - 3; j++)
            if(board[i][j]==p && board[i][j+1]==p &&
               board[i][j+2]==p && board[i][j+3]==p)
                return true;

    // Vertical
    for(int i = 0; i < ROWS - 3; i++)
        for(int j = 0; j < COLS; j++)
            if(board[i][j]==p && board[i+1][j]==p &&
               board[i+2][j]==p && board[i+3][j]==p)
                return true;

    // Diagonal right
    for(int i = 0; i < ROWS - 3; i++)
        for(int j = 0; j < COLS - 3; j++)
            if(board[i][j]==p && board[i+1][j+1]==p &&
               board[i+2][j+2]==p && board[i+3][j+3]==p)
                return true;

    // Diagonal left
    for(int i = 0; i < ROWS - 3; i++)
        for(int j = 3; j < COLS; j++)
            if(board[i][j]==p && board[i+1][j-1]==p &&
               board[i+2][j-2]==p && board[i+3][j-3]==p)
                return true;

    return false;
}

int main() {
    initBoard();
    char player = 'X';
    int col;

    while(true) {
        printBoard();
        cout << "Player " << player << " turn. Choose column (1-7): ";
        cin >> col;
        col--;

        if(col < 0 || col >= COLS || !dropToken(col, player)) {
            cout << "Invalid move! Try again.\n";
            continue;
        }

        if(checkWin(player)) {
            printBoard();
            cout << "🎉 Player " << player << " Wins!\n";
            break;
        }

        player = (player == 'X') ? 'O' : 'X';
    }
    return 0;
}
