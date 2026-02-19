#include <iostream>
using namespace std;

void Array(float arr[3][4])
{
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cout << "Enter Numbers [" << i+1 << "][" << j+1 << "]: ";
            cin >> arr[i][j];
    }
    }
}

float smallestInFirstRow(float arr[3][4])
 {
    float smallest = arr[0][0];
    for (int i = 0; i < 4; i++) {
        if (arr[0][i] < smallest) {
            smallest = arr[0][i];
    }
    }
    return smallest;
}

float largestInThirdRow(float arr[3][4])
{
    float largest = arr[2][0];
    for (int i = 0; i < 4; i++) {
      if (arr[2][i] > largest) {
            largest = arr[2][i];
    }
    }
    return largest;
}

int main()
{
    float arr[3][4];
    Array(arr);
    float smallest = smallestInFirstRow(arr);
    float largest = largestInThirdRow(arr);
    float multi = smallest * largest;
    cout << " Multipication of the smallest number of 1st row and the largest number of 3rd row is: " << multi << endl;
    return 0;
}
