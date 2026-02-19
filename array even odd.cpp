
#include <iostream>
using namespace std;

int main() {
  int numbers[5];
  int sum;

  // read in numbers from user
  for (int i = 0; i < 5; i++) {
    cout << "Enter number " << i + 1 << ": ";
    cin >> numbers[i];
  }

  // check and modify each number
  for (int i = 0; i < 5; i++) {
    if (numbers[i] % 2 == 0) {
            cout<<"Even number : "<<i+1<<endl;
      numbers[i] = 0;
  } else {cout<<"odd number"<<endl;
     numbers[i] = 1;
    }
  }

  // print modified array
  cout << "Modified array: ";
  for (int i = 0; i < 5; i++) {
    cout << numbers[i]<<endl;
  }
}
