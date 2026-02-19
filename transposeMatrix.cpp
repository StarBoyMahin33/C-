void transposeMatrix(int matrix[][10], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            int temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }
}

#include <iostream>
using namespace std;

void transposeMatrix(int matrix[][10], int n);

int main() {
    int matrix[10][10] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int n = 3;
    transposeMatrix(matrix, n);
    cout << "Transposed Matrix:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}
