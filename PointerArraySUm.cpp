#include <iostream>
using namespace std;

int main() {
    int size;

    cout << "Enter the number of elements in the array: ";
    cin >> size;

    int *array = new int[size];

    cout << "Enter " << size << " integers:" << endl;
    for (int i = 0; i < size; ++i) {
        cout << "Element [" << i << "]: ";
        cin >> array[i];}

    int sum = 0;
    int *ptr = array;

    for (int i = 0; i < size; ++i) {
        sum += *ptr;
        ptr++;}

    cout << "The sum of the array elements is: " << sum << endl;

    delete[] array;
    return 0;
}
