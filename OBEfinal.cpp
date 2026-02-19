#include <iostream>
using namespace std;

struct Node {
    int location;
    Node* next;
    Node* prev;

 Node(int loc) :
  location(loc), next(nullptr), prev(nullptr) {}
};

class DeliveryRoute {
private:
    Node* head;

public:
    DeliveryRoute() :
        head(nullptr) {}

    ~DeliveryRoute() {
        Node* current = head;
        while (current) {
            Node* nextNode = current->next;
            delete current;
            current = nextNode;
        }
    }

    void displayRoute() {
        if (head == nullptr) {
            cout << "Delivery route is empty." << endl;
            return;
        }
        Node* temp = head;
        cout << "Current delivery route: ";
        while (temp) {
            cout << temp->location << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    void addLocation(int location) {
        Node* newNode = new Node(location);
        if (head == nullptr) {
            head = newNode;
        } else {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
        displayRoute();
    }

    void removeLastLocation() {
        if (head == nullptr) {
            cout << "Nothing to remove, delivery route is empty." << endl;
            return;
        }
        Node* temp = head;
        while (temp->next) {
            temp = temp->next;
        }
        if (temp->prev) {
            temp->prev->next = nullptr;
        } else {
            head = nullptr;
        }
        delete temp;
        displayRoute();
    }

    void insertSecondLast(int location) {
        Node* newNode = new Node(location);

        if (head == nullptr || head->next == nullptr) {
            addLocation(location);
            return;
        }
        Node* temp = head;

        while (temp->next && temp->next->next != nullptr) {
            temp = temp->next;
        }

        newNode->next = temp->next;
        newNode->prev = temp;

        if (temp->next) {
            temp->next->prev = newNode;
        }
        temp->next = newNode;

        displayRoute();
    }
};

 int getLength() {
        int length = 0;
        Node *current = head;
        while (current) {
            length++;
            current = current->next;
        }
        return length;
    }
};
int getMidPoint(int mid)
{
    mid= length/2;
    return mid;
}

int main() {
    DeliveryRoute route;

    route.addLocation(80);
    route.addLocation(65);
    route.addLocation(50);
    route.addLocation(35);
    route.addLocation(20);
    route.addLocation(10);

    route.addLocation(90);
    route.insertSecondLast(30);
    route.removeLastLocation();
    int length = route.getLength();
    cout << "Length of the delivery route: " << length << endl;
    int mid = route.getMidpoint();
    cout << "MID POINT of the delivery route: " << mid << endl;*/
    return 0;
}
