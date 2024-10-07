#include <iostream>
#include <vector>
using namespace std;

int multiplyRowCol(vector<vector<int>>& A, vector<vector<int>>& B, int row, int col, int k, int Ca) {
    if (k == Ca) {
        return 0;
    }
    return A[row][k] * B[k][col] + multiplyRowCol(A, B, row, col, k + 1, Ca);
}

void multiplyMatrices(vector<vector<int>>& A, vector<vector<int>>& B, vector<vector<int>>& C, int row, int col, int Ra, int Cb, int Ca) {
    if (row == Ra) {
        return;
    }
    if (col == Cb) {
        multiplyMatrices(A, B, C, row + 1, 0, Ra, Cb, Ca);
        return;
    }
    C[row][col] = multiplyRowCol(A, B, row, col, 0, Ca);
    multiplyMatrices(A, B, C, row, col + 1, Ra, Cb, Ca);
}

int main() {
    int Ra, Ca, Rb, Cb;

    cin >> Ra >> Ca;
    vector<vector<int>> A(Ra, vector<int>(Ca));
    for (int i = 0; i < Ra; i++) {
        for (int j = 0; j < Ca; j++) {
            cin >> A[i][j];
        }
    }

    cin >> Rb >> Cb;
    vector<vector<int>> B(Rb, vector<int>(Cb));
    for (int i = 0; i < Rb; i++) {
        for (int j = 0; j < Cb; j++) {
            cin >> B[i][j];
        }
    }

    vector<vector<int>> C(Ra, vector<int>(Cb, 0));

    multiplyMatrices(A, B, C, 0, 0, Ra, Cb, Ca);

    for (int i = 0; i < Ra; i++) {
        for (int j = 0; j < Cb; j++) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
