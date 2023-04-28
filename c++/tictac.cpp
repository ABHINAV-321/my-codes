#include <iostream>
using namespace std;

char board[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};
char currentPlayer = 'X';
bool gameOver = false;

void drawBoard() {
    cout << "-------------" << endl;
    for (int i = 0; i < 3; i++) {
        cout << "| ";
        for (int j = 0; j < 3; j++) {
            cout << board[i][j] << " | ";
        }
        cout << endl << "-------------" << endl;
    }
}

void switchPlayer() {
    if (currentPlayer == 'X') {
        currentPlayer = 'O';
    } else {
        currentPlayer = 'X';
    }
}

void placeMarker(int choice) {
    int row = (choice - 1) / 3;
    int col = (choice - 1) % 3;
    
    if (board[row][col] == 'X' || board[row][col] == 'O') {
        cout << "Invalid move. Please choose an empty space." << endl;
        switchPlayer();
        return;
    }
    
    board[row][col] = currentPlayer;
}

void checkForWin() {
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2]) {
            gameOver = true;
            switchPlayer();
            return;
        }
    }
    
    for (int i = 0; i < 3; i++) {
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i]) {
            gameOver = true;
            switchPlayer();
            return;
        }
    }
    
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2]) {
        gameOver = true;
        switchPlayer();
        return;
    }
    
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0]) {
        gameOver = true;
        switchPlayer();
        return;
    }
}

int main() {
    int choice;
    
    while (!gameOver) {
        drawBoard();
        cout << "Player " << currentPlayer << ", please choose a space: ";
        cin >> choice;
        
        placeMarker(choice);
        checkForWin();
        switchPlayer();
    }
    
    drawBoard();
    cout << "Congratulations, Player " << currentPlayer << "! You win!" << endl;
    
    return 0;
}
