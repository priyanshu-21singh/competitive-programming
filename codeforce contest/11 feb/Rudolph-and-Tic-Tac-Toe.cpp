#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        char board[3][3];
        
        
        for (int i = 0; i < 3; i++)
            for (int j = 0; j < 3; j++)
                cin >> board[i][j];

        char win = 'D'; 

        
        for (char ch : {'X', 'O', '+'}) {
            if (
                (board[0][0] == ch && board[0][1] == ch && board[0][2] == ch) || // Row 1
                (board[1][0] == ch && board[1][1] == ch && board[1][2] == ch) || // Row 2
                (board[2][0] == ch && board[2][1] == ch && board[2][2] == ch) || // Row 3
                (board[0][0] == ch && board[1][0] == ch && board[2][0] == ch) || // Col 1
                (board[0][1] == ch && board[1][1] == ch && board[2][1] == ch) || // Col 2
                (board[0][2] == ch && board[1][2] == ch && board[2][2] == ch) || // Col 3
                (board[0][0] == ch && board[1][1] == ch && board[2][2] == ch) || // Diagonal 1
                (board[0][2] == ch && board[1][1] == ch && board[2][0] == ch)    // Diagonal 2
            ) {
                win = ch;
                break;
            }
        }
        cout << (win == 'D' ? "DRAW" : string(1, win)) << endl;
    }
    return 0;
}

