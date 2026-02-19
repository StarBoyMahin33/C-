#include <iostream>
#include <string>
#include <stack>
using namespace std;

const int MAX_TERMINALS = 10;


struct PassengerNode {
    string name;
    string passport;
    int baggageWeight;
    PassengerNode* next;
    PassengerNode* prev;

    PassengerNode(string n, string p, int bw)
        : name(n), passport(p), baggageWeight(bw), next(nullptr), prev(nullptr) {}
};


class PassengerList {
private:
    PassengerNode* head;
    PassengerNode* tail;
    stack<PassengerNode*> checkInStack;

public:
    PassengerList() : head(nullptr), tail(nullptr) {}

    void addPassenger(string name, string passport, int weight) {
        PassengerNode* newNode = new PassengerNode(name, passport, weight);
        if (!head) {
            head = tail = newNode;
        } else {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
        checkInStack.push(newNode);

        cout << "Passenger Added: " << name << endl;
        cout << "Passport: " << passport << endl;
        cout << "Baggage: " << weight << "kg" << endl << endl;
    }

    void removePassenger(PassengerNode* node) {
        if (!node) return;

        if (node == head && node == tail) {
            head = tail = nullptr;
        } else if (node == head) {
            head = head->next;
            if (head) head->prev = nullptr;
        } else if (node == tail) {
            tail = tail->prev;
            if (tail) tail->next = nullptr;
        } else {
            node->prev->next = node->next;
            node->next->prev = node->prev;
        }
    }

    void undoLastCheckin() {
        if (checkInStack.empty()) {
            cout << "No actions to undo." << endl;
            return;
        }

        PassengerNode* lastNode = checkInStack.top();
        checkInStack.pop();


        cout << "Undo Last Check-in" << endl;
        cout << "Removed: " << lastNode->name << " | Passport: " << lastNode->passport
             << " | Baggage: " << lastNode->baggageWeight << "kg" << endl << endl;

        removePassenger(lastNode);
        delete lastNode;
    }

    void displayPassengersForward() {
        PassengerNode* current = head;
        cout << "Passenger Linked List (Forward)" << endl;
        while (current) {
            cout << "(" << current->name << " | " << current->passport << " | "
                 << current->baggageWeight << "kg)";
            if (current->next) cout << " --> ";
            current = current->next;
        }
        cout << endl << endl;
    }
};


struct Terminal {
    string name;
};


struct Connection {
    int connectedTerminals[MAX_TERMINALS];
    int count;

    Connection() : count(0) {}
};


class TerminalManager {
private:
    Terminal terminals[MAX_TERMINALS];
    Connection connections[MAX_TERMINALS];
    int terminalCount;

public:
    TerminalManager() : terminalCount(0) {}

    void addTerminal(const string& name) {
        if (terminalCount < MAX_TERMINALS) {
            terminals[terminalCount].name = name;
            terminalCount++;
            cout << "Terminal Added: " << name << endl;
        }
    }

    void addConnection(int a, int b) {
        if (a < terminalCount && b < terminalCount &&
            connections[a].count < MAX_TERMINALS && connections[b].count < MAX_TERMINALS) {
            connections[a].connectedTerminals[connections[a].count++] = b;
            connections[b].connectedTerminals[connections[b].count++] = a;
            cout << "Connection Added: " << terminals[a].name << " <-> " << terminals[b].name << endl;
        }
    }

    void printConnections() {
        cout << "Terminal Connections (Adjacency List):\n";
        for (int i = 0; i < terminalCount; ++i) {
            cout << terminals[i].name << " -> ";
            for (int j = 0; j < connections[i].count; ++j) {
                cout << terminals[connections[i].connectedTerminals[j]].name;
                if (j < connections[i].count - 1) cout << ", ";
            }
            cout << endl;
        }
    }
};


struct FlyerNode {
    int id;
    string name;
    int totalFlights;
    FlyerNode* left;
    FlyerNode* right;

    FlyerNode(int fid, string fn, int tf)
        : id(fid), name(fn), totalFlights(tf), left(nullptr), right(nullptr) {}
};

class FrequentFlyerManager {
private:
    FlyerNode* root;

public:
    FrequentFlyerManager() : root(nullptr) {}

    void insertFlyer(int id, string name, int flights) {
        root = insert(root, id, name, flights);
        cout << "Frequent Flyer Inserted: ID " << id << " | Name: " << name << " | Flights: " << flights << endl;
    }

    FlyerNode* insert(FlyerNode* node, int id, string name, int flights) {
        if (!node) return new FlyerNode(id, name, flights);
        if (id < node->id) node->left = insert(node->left, id, name, flights);
        else if (id > node->id) node->right = insert(node->right, id, name, flights);
        return node;
    }

    void displayInOrder() {
        cout << "In-order Traversal of Frequent Flyers:" << endl;
        displayInOrder(root);
        cout << endl;
    }

    void displayInOrder(FlyerNode* node) {
        if (node) {
            displayInOrder(node->left);
            cout << "ID: " << node->id << " | Name: " << node->name << " | Flights: " << node->totalFlights << endl;
            displayInOrder(node->right);
        }
    }
};


int calculateBaggageCharge(int weight, int discount) {
    return (weight * 100) + 200 - discount;
}

int main() {
    PassengerList passengerList;
    TerminalManager terminalManager;
    FrequentFlyerManager flyerManager;

    passengerList.addPassenger("Alice", "P12345", 18);
    passengerList.addPassenger("Bob", "P67890", 30);
    passengerList.displayPassengersForward();


    passengerList.undoLastCheckin();
    cout << "Passenger Linked List (After Undo)" << endl;
    passengerList.displayPassengersForward();


    flyerManager.insertFlyer(101, "Alice", 12);
    flyerManager.insertFlyer(105, "Bob", 8);
    flyerManager.displayInOrder();

    terminalManager.addTerminal("T1");
    terminalManager.addTerminal("T2");
    terminalManager.addTerminal("T3");


    terminalManager.addConnection(0, 1);
    terminalManager.addConnection(1, 2);
    terminalManager.printConnections();


    int weight = 25;
    int discount = 150;
    int finalCharge = calculateBaggageCharge(weight, discount);


    cout << "Charge Expression: ((Weight * 100) + 200) - Discount" << endl;
    cout << "Prefix Expression: - + * Weight 100 200 Discount" << endl;
    cout << "Values: Weight = " << weight << ", Discount = " << discount << endl;
    cout << "Final Charge: " << finalCharge << endl;

    return 0;
}
