#include <iostream>
#include <vector>

using namespace std;

bool isSafe(vector<vector<int>>& board, int row, int col, int N) {
    // Check if there is a queen in the same column
    for (int i = 0; i < row; ++i) {
        if (board[i][col] == 1) {
            return false;
        }
    }
    
    // Check if there is a queen in the upper left diagonal
    for (int i = row, j = col; i >= 0 && j >= 0; --i, --j) {
        if (board[i][j] == 1) {
            return false;
        }
    }
    
    // Check if there is a queen in the upper right diagonal
    for (int i = row, j = col; i >= 0 && j < N; --i, ++j) {
        if (board[i][j] == 1) {
            return false;
        }
    }
    
    return true;
}

void solveNQueensUtil(vector<vector<int>>& board, int row, int N) {
    if (row == N) {
        // All queens are placed, print the solution
        for (int i = 0; i < N; ++i) {
            for (int j = 0; j < N; ++j) {
                cout << board[i][j] << " ";
            }
            cout << endl;
        }
        cout << endl;
        return ;
    }
    for (int col = 0; col < N; ++col) {
        if (isSafe(board, row, col, N)) {
            board[row][col] = 1;
            solveNQueensUtil(board, row + 1, N);
            board[row][col] = 0; // Backtrack
        }
    }
}

void solveNQueens(int N) {
    vector<vector<int>> board(N, vector<int>(N, 0));
    solveNQueensUtil(board, 0, N);
}

int main() {
    int N;
    cout << "Enter the value of N: "<<endl;
    cin >> N;
    solveNQueens(N);
    return 0;
}
