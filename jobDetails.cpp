#include <iostream>
#include <string>
using namespace std;

struct Person {
    string firstName;
    string lastName;
    int age;
    double salary;

    void display_info() {
        cout << "Name: " << firstName << " " << lastName << endl;
      cout << "Age: " << age << endl;
        cout << "Salary: $" << salary <<endl;
    }
};

int main() {
    Person person;

    cout << "Enter person's details:" << endl;
  cout << "First name: ";
    cin >> person.firstName;
    cout << "Last name: ";
     cin >> person.lastName;
    cout << "Age: ";
    cin >> person.age;
    cout << "Salary: $";
    cin >> person.salary;

    cout << endl;
    person.display_info();

    return 0;
}
