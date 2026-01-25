#include <iostream>
using namespace std;

char board[3][3] = {
    {'1','2','3'},
    {'4','5','6'},
    {'7','8','9'}
};

char currentPlayer = 'X';

// Board print function
void displayBoard() {
    cout << "\n";
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout << " " << board[i][j] << " ";
            if(j < 2) cout << "|";
        }
        cout << "\n";
        if(i < 2) cout << "---|---|---\n";
    }
    cout << "\n";
}

// Move input
void playerMove() {
    int choice;
    cout << "Player " << currentPlayer << ", enter position (1-9): ";
    cin >> choice;

    int row = (choice - 1) / 3;
    int col = (choice - 1) % 3;

    if(board[row][col] != 'X' && board[row][col] != 'O') {
        board[row][col] = currentPlayer;
    } else {
        cout << "❌ Invalid move! Try again.\n";
        playerMove();
    }
}

// Win check
bool checkWin() {
    for(int i = 0; i < 3; i++) {
        if(board[i][0] == board[i][1] && board[i][1] == board[i][2]) return true;
        if(board[0][i] == board[1][i] && board[1][i] == board[2][i]) return true;
    }

    if(board[0][0] == board[1][1] && board[1][1] == board[2][2]) return true;
    if(board[0][2] == board[1][1] && board[1][1] == board[2][0]) return true;

    return false;
}

// Draw check
bool checkDraw() {
    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++)
            if(board[i][j] != 'X' && board[i][j] != 'O')
                return false;
    return true;
}

int main() {
    cout << "🎮 TIC TAC TOE GAME\n";
    displayBoard();

    while(true) {
        playerMove();
        displayBoard();

        if(checkWin()) {
            cout << "🎉 Player " << currentPlayer << " wins!\n";
            break;
        }

        if(checkDraw()) {
            cout << "🤝 Game Draw!\n";
            break;
        }

        currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
    }

    return 0;
}
