#include <iostream>
#include <string>

class ATMachine {
private:
    int balance;
    int withdrawalAmount;
    int transferAmount;
    std::string recentTransactions[10];
    int numTransactions;

public:
    ATMachine() : balance(10000), withdrawalAmount(0), transferAmount(0), numTransactions(0) {}

    void displayMenu() {
        std::cout << "\n1. Withdraw money\n2. Transfer money\n3. Check balance\n4. Recent transactions\n5. Exit\n";
        std::cout << "Enter your choice: ";
    }

    void enterPin() {
        int pin = 1234;
        int enteredPin;
        std::cout << "Enter your PIN: ";
        std::cin >> enteredPin;

        if (enteredPin == pin) {
            std::cout << "Welcome to our ATM\n";
            displayMenu();
        } else {
            std::cout << "Wrong PIN. Please try again\n";
            enterPin();
        }
    }

    void withdrawMoney() {
        std::cout << "Enter the amount to withdraw: ";
        std::cin >> withdrawalAmount;

        if (withdrawalAmount <= balance) {
            balance -= withdrawalAmount;
            recentTransactions[numTransactions++] = "Withdrew " + std::to_string(withdrawalAmount) + "Tk.";
            std::cout << "You have withdrawn " << withdrawalAmount << "Tk.\n";
            std::cout << "Your new balance is " << balance << "Tk.\n";
        } else {
            std::cout << "Insufficient funds\n";
        }
    }

    void transferMoney() {
        int accountNumber;
        std::cout << "Transfer money functionality goes here\n";
        std::cout << "Enter Recipient's Account Number: ";
        std::cin >> accountNumber;
        std::cout << "Enter total amount to transfer : ";
        std::cin >> transferAmount;

        if (transferAmount <= balance) {
            balance -= transferAmount;
            recentTransactions[numTransactions++] = "Transferred " + std::to_string(transferAmount) + "Tk. to account " + std::to_string(accountNumber);
            std::cout << "You have transfered " << transferAmount << "Tk. to account " << accountNumber << "\n";
            std::cout << "Your new balance is " << balance << "Tk.\n";
        } else {
            std::cout << "Insufficient funds\n";
        }
    }

    void checkBalance() {
        std::cout << "Your current balance is " << balance << "Tk. ";
    }

    void viewRecentTransactions() {
        std::cout << "Recent Transactions:\n";
        for (int i = 0; i < numTransactions; i++) {
            std::cout << "- " << recentTransactions[i] << "\n";
        }
    }
};

int main() {
    ATMachine atm;
    atm.enterPin();

    int choice;
    std::cin >> choice;

    while (choice != 5) {
        switch (choice) {
            case 1:
                atm.withdrawMoney();
                break;
            case 2:
                atm.transferMoney();
                break;
            case 3:
                atm.checkBalance();
                break;
            case 4:
                atm.viewRecentTransactions();
                break;
            default:
                std::cout << "Invalid choice. Please try again.\n";
                break;
        }
        atm.displayMenu();
        std::cin >> choice;
    }

    std::cout << "Thank you for choosing our service\n";

    return 0;
}
