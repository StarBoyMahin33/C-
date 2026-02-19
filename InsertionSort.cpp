#include <iostream>
using namespace std;

const int SIZE = 5;

void insertionSort(int serialNumbers[], int n) {
    for (int i = 1; i < n; ++i) {
        int key = serialNumbers[i];
        int j = i - 1;

        while (j >= 0 && serialNumbers[j] > key) {
            serialNumbers[j + 1] = serialNumbers[j];
            j--;
        }
        serialNumbers[j + 1] = key;
    }
}


int binarySearch(int serialNumbers[], int n, int target) {
    int left = 0;
    int right = n - 1;

    while (left <= right) {
        int mid = (left + right ) / 2;


        if (serialNumbers[mid] == target) {
            return mid;
        }

        else if (serialNumbers[mid] < target) {
            left = mid + 1;
        }

        else {
            right = mid - 1;
        }
    }
    return -1;
}

int main() {
    int serialNumbers[SIZE] = {102, 101, 105, 103, 104};
    int target;


    insertionSort(serialNumbers, SIZE);

    cout << "Sorted Serial Numbers: ";
    for (int i = 0; i < SIZE; ++i) {
        cout << serialNumbers[i] << " ";
    }
    cout << endl;


    cout << "Enter the serial number to search for: ";
    cin >> target;

    int result = binarySearch(serialNumbers, SIZE, target);
    if (result != -1) {
        cout << "Serial number " << target << " found at index " << result << "." << endl;
    } else {
        cout << "Serial number " << target << " not found." << endl;
    }

    return 0;
}
