#include<iostream>
using namespace std;

struct Customer {
    int customerID;
    string name;
    int age;
    string address;
    string country;
};
void storeCustomers(Customer customers[], int size) {

    customers[0] = {89, "Ayaan Rahman", 23, "Road 5, Dhanmondi, Dhaka", "Bangladesh"};
    customers[1] = {90, "Nayra Karim", 21, "Road 10, Islamabad", "Pakistan"};
    customers[2] = {91, "Zayan Ahmed", 30, "Kolkata, West Bengal", "India"};
    customers[3] = {92, "Meher Fatima",56, "Johar Town,Lahore", "Pakistan"};}

 void findPrizeWinners(Customer customers[], int size) {
    int count = 0;
    cout << "Prize Winner Customers:"<<endl;

    for (int i = 0; i < size; i++) {
        if (customers[i].age < 30) {
            cout << "CUSTOMER DETAILS "<<(i+1) <<endl;
            cout << "ID: " << customers[i].customerID<<endl;
            cout<< "Name: " << customers[i].name<<endl;
            cout<< "Age: " << customers[i].age<<endl;
            cout<< "Address: " << customers[i].address<<endl;
            cout<< "Country: " << customers[i].country << endl;
            count++;}}



    cout << "Total number of prize winners: " << count << endl;


    for (int i = 0; i < size; i++) {
        if (customers[i].age < 30 && customers[i].country == "Bangladesh") {
            cout << "Congratulations " << customers[i].name << "! You have won a special prize!" << endl;
        }
    }
}
int main() {
    const int numCustomers = 4;
    Customer customers[numCustomers];

    storeCustomers(customers, numCustomers);

    findPrizeWinners(customers, numCustomers);

    return 0;
}
