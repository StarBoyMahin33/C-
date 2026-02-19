#include <iostream>
using namespace std;
int main()
{
    float floatArray[6];
    int intArray[6];

    cout << "Enter 6 floating numbers: ";
    for (int i = 0; i <6; i++) {
        cin >> floatArray[i];
    }

    cout << "Enter 6 integer numbers: ";
    for (int i = 0; i <6; i++) {
        cin >> intArray[i];
    }

    cout << "The multiplication of elements in opposite order is: " << endl;
    for (int i = 0; i <6; i++) {
        cout << floatArray[i] * intArray[5 - i] << endl;
    }

    return 0;
}
/*#include <iostream>
using namespace std;
int main()
{
    int pin = 1234;
    int balance = 10000;
    int enteredPin;
    int choice;
    int amount;
    int accountNumber;

    cout << "Enter your PIN: ";
    cin >> enteredPin;

    if (enteredPin == pin)
    {
        cout << "Welcome to our ATM" <<endl;
        cout << "1. Withdraw money"<<endl;
        cout << "2. Transfer money"<<endl;
        cout << "3. Check balance"<<endl;
        cout << "4. Recent Transactions"<<endl;
        cout << "5. Exit"<<endl;
        cout << "Enter your choice: "<<endl;
        cin >> choice;

        switch (choice)
        {
            case 1:
                cout<< "Enter the amount to withdraw: ";
                cin>>amount;
                if(amount <= balance)
                {
                    balance = balance - amount;
                    cout<< "You have withdrawn " << amount << "Tk."<<endl;
                    cout<< "Your new balance is " << balance << "Tk."<<endl;
                }
                else
                {
                    cout<< "Insufficient funds"<<endl;
                }
                break;
            case 2:
                cout<<"Transfer money functionality goes here"<<endl;
                cout<<"Enter Recipient's Account Number: ";
                cin>>accountNumber;
                cout<<"Enter total amount to transfer : ";
                cin>>amount;
                balance = balance - amount;
                cout << "You have transfered " << amount << "Tk. to "<<accountNumber<<endl;
                cout << "Your new balance is " << balance << "Tk."<<endl;
                break;
            case 3:
                cout<< "Your current balance is " << balance << "Tk. ";
                break;
            case 4:
                cout<< "Recent Transactions : No recent transactions ";
                break;
            case 5:
                cout<< "Thank you for choosing our service";
                break;
            default:
                cout<< "Invalid choice. Please try again.\n";
                break;
        }
    }
    else
    {
        cout<< "Wrong PIN. Please try again ";
    }
}    return 0;*/

