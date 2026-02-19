#include <iostream>
#include <string>
using namespace std;

const int MAX_APPLICANTS = 25;
const int TOTAL_CATEGORIES = 4;

// Structure for visa type
struct VisaType {
    string name;
    int servedCount;
};

// Structure for each counter
struct Counter {
    string type;
    int counterNumber;
    int servedCount;
};

// Visa types
VisaType visaTypes[TOTAL_CATEGORIES] = {
    {"Tourist Visa", 0},
    {"Medical Visa", 0},
    {"Business Visa", 0},
    {"Government Officials Visa", 0}
};

// Counters for each type
Counter counters[TOTAL_CATEGORIES] = {
    {"TR", 1, 0},
    {"MED", 2, 0},
    {"BS", 3, 0},
    {"GO", 4, 0}
};

// Token management
const int MAX_TOKENS = MAX_APPLICANTS;
string tokenQueues[TOTAL_CATEGORIES][MAX_TOKENS];
int frontIndex[TOTAL_CATEGORIES] = {0};
int rearIndex[TOTAL_CATEGORIES] = {0};
int tokenCounter = 1;

// Issue a token
bool requestToken(int visaIndex) {
    if (visaIndex < 0 || visaIndex >= TOTAL_CATEGORIES) {
        cout << "Invalid visa index." << endl;
        return false;
    }

    if (rearIndex[visaIndex] < MAX_TOKENS) {
        string token = counters[visaIndex].type + "-" + to_string(tokenCounter);
        cout << "Your token is: " << token << endl;

        tokenQueues[visaIndex][rearIndex[visaIndex]++] = token;
        visaTypes[visaIndex].servedCount++;
        tokenCounter++;
        return true;
    } else {
        cout << "Maximum applicants reached for " << visaTypes[visaIndex].name << endl;
        return false;
    }
}

// Call the next customer
void callNextCustomer() {
    for (int i = 0; i < TOTAL_CATEGORIES; ++i) {
        if (frontIndex[i] < rearIndex[i]) {
            string token = tokenQueues[i][frontIndex[i]++];
            counters[i].servedCount++;
            cout << "Counter " << counters[i].counterNumber << ": Please serve the token number \"" << token << "\"" << endl;
            return;
        }
    }
    cout << "All counters are idle or no applicants are waiting." << endl;
}

// Generate daily summary
void generateSummary() {
    cout << "\n===== Daily Summary Report =====\n";

    cout << "\n1.Applicants served by Visa Type:\n";
    for (int i = 0; i < TOTAL_CATEGORIES; ++i) {
        cout << visaTypes[i].name << ": " << visaTypes[i].servedCount << " applicants\n";
    }

    cout << "\n2.Applicants served by Counter:\n";
    for (int i = 0; i < TOTAL_CATEGORIES; ++i) {
        cout << "Counter " << counters[i].counterNumber << " (" << counters[i].type << "): "
             << counters[i].servedCount << " applicants\n";
    }

    cout << "\n3.Idle Counters:\n";
    for (int i = 0; i < TOTAL_CATEGORIES; ++i) {
        if (frontIndex[i] >= rearIndex[i]) {
            cout << "Counter " << counters[i].counterNumber << " (" << counters[i].type << ") is idle.\n";
        }
    }

    cout << "=================================\n";
}

// Main simulation
int main() {
    string input;

    while (true) {
        cout << "\n==== Visa Token System ====\n";
        cout << "Enter 'TR'  - Tourist Visa\n";
        cout << "Enter 'MED' - Medical Visa\n";
        cout << "Enter 'BS'  - Business Visa\n";
        cout << "Enter 'GO'  - Government Officials Visa\n";
        cout << "Enter 'CALL' to serve next customer\n";
        cout << "Enter 'END'  to generate summary and exit\n";
        cout << "Your input: ";
        cin >> input;

        if (input == "TR") {
            requestToken(0);
        } else if (input == "MED") {
            requestToken(1);
        } else if (input == "BS") {
            requestToken(2);
        } else if (input == "GO") {
            requestToken(3);
        } else if (input == "CALL") {
            callNextCustomer();
        } else if (input == "END") {
            generateSummary();
            break;
        } else {
            cout << "Invalid input. Please try again."<<endl;
        }
    }

    return 0;
}
