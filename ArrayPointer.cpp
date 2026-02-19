#include <iostream>

using namespace std;

int main() {
    const int rows = 3;
    const int cols = 3;
    int matrix[rows][cols];


    cout << "Enter the elements of the 3x3 matrix:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << "Element [" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }


    cout << "\nThe elements of the matrix are:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {

            int *ptr = &matrix[i][j];
            cout << *ptr << " ";
        }
        cout << endl;
    }

    return 0;
}
