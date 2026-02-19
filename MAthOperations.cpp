#include <iostream>
using namespace std;

int main() {
   int num[4];
   float sum = 0;

   cout << "Enter 4 integer numbers: ";
   for(int i = 0; i < 4; i++) {
       cin >> num[i];
       sum += num[i];
   }

   float average = sum / 4;
   int product = 1;
   for(int i = 0; i < 4; i++) {
       product *= num[i];
   }

   cout << "Sum: " << sum << endl;
   cout << "Average: " << average << endl;
   cout << "Multiplication: " << product << endl;

   return 0;
}

