#include <iostream>
using namespace std;

int main() {
    int arr[2][3] = {{-1, 2, 3}, {4, -5, 6}};
    int replacementValue = 0;

    cout << "Original array: " <<endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            if (arr[i][j] < 0) {
                arr[i][j] = replacementValue;
            }
        }
    }

  cout << "Array after replacing negative values: " << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr[i][j] << " ";
        }
       cout << endl;
    }

    return 0;
}
