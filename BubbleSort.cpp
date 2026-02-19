#include <iostream>

using namespace std;

const int SIZE = 5;

void bubbleSort(int rollNumbers[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (rollNumbers[j] > rollNumbers[j + 1]) {
                int temp = rollNumbers[j];
                rollNumbers[j] = rollNumbers[j + 1];
                rollNumbers[j + 1] = temp;
            }
        }
    }
}

int binarySearch(int rollNumbers[], int n, int target) {
    int left = 0;
    int right = n - 1;

    while (left <= right) {
        int mid = (left + right)  / 2;


        if (rollNumbers[mid] == target) {
            return mid;
        }

        else if (rollNumbers[mid] < target) {
            left = mid + 1;
        }

        else {
            right = mid - 1;
        }
    }
    return -1;
}

int main() {
    int rollNumbers[SIZE] = {102, 101, 105, 103, 104};
    int target;


    bubbleSort(rollNumbers, SIZE);

    cout << "Sorted Roll Numbers: ";
    for (int i = 0; i < SIZE; ++i) {
        cout << rollNumbers[i] << " ";
    }
    cout << endl;


    cout << "Enter the roll number to search for: ";
    cin >> target;

    int result = binarySearch(rollNumbers, SIZE, target);
    if (result != -1) {
        cout << "Roll number " << target << " found at index " << result << "." << endl;
    } else {
        cout << "Roll number " << target << " not found." << endl;
    }

    return 0;
}
