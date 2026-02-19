#include <iostream>
#include <string>

using namespace std;

int binarySearch(string books[], int size,  string title) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int mid = (left + right ) / 2;


        if (books[mid] == title) {
            return mid;
        }


        if (books[mid] < title) {
            left = mid + 1;
        }

        else {
            right = mid - 1;
        }
    }

    return -1;
}

int main() {
    const int SIZE = 5;
    string books[SIZE] = {
        "C++Programming",
        "DataStructures",
        "DatabaseManagement",
        "MachineLearning",
        "OperatingSystems"
    };

    string titleToSearch;
    cout << "Enter the title of the book to search for (no spaces): ";
    cin >> titleToSearch;


    int result = binarySearch(books, SIZE, titleToSearch);
    if (result != -1) {
        cout << "\"" << titleToSearch << "\" found at index " << result << endl;
    } else {
        cout << "\"" << titleToSearch << "\" is not found" << endl;
    }

    return 0;
}
