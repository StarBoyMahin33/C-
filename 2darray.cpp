#include <iostream>
using namespace std;

// Function to reverse a string (pass by reference)
void reverseString(string &str) {
    int length = str.length();
    for (int i = 0; i < length / 2; i++) {
        swap(str[i], str[length - i - 1]);
    }
}

int main() {
    string str;
    cout << "Enter Input: ";
    getline(cin, str);

    reverseString(str);
    cout << "Reversed String: " << str << endl;

    return 0;
}
