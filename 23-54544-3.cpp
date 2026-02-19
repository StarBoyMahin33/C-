#include <iostream>

using namespace std;

const int MAX_PARTICIPANTS = 20;
int participants[MAX_PARTICIPANTS];
int currentSize = 0;

void displayList() {
    for (int i = 0; i < currentSize; i++) {
        cout << participants[i] << " ";
    }
    cout << endl;
}

void insertAtBeginning(int id) {

    for (int i = currentSize; i > 0; i--) {
        swap(participants[i], participants[i - 1]);
    }
    participants[0] = id;
    currentSize++;
}

void insertAtEnd(int id) {
    participants[currentSize] = id;
    currentSize++;
}

void insertAtMiddle(int id) {
    int middleIndex = currentSize / 2;

    for (int i = currentSize; i > middleIndex; i--) {
        swap(participants[i], participants[i - 1]);
    }
    participants[middleIndex] = id;
    currentSize++;
}

void deleteFromBeginning() {
    for (int i = 0; i < currentSize - 1; i++) {
        swap(participants[i], participants[i + 1]);
    }
    currentSize--;
}

void deleteFromPosition(int position) {
    for (int i = position; i < currentSize - 1; i++) {
        swap(participants[i], participants[i + 1]);
    }
    currentSize--;
}

int main() {
    participants[currentSize++] = 101;
    participants[currentSize++] = 102;
    participants[currentSize++] = 103;
    participants[currentSize++] = 104;
    participants[currentSize++] = 105;
    participants[currentSize++] = 106;
    participants[currentSize++] = 107;
    participants[currentSize++] = 108;
    participants[currentSize++] = 109;
    participants[currentSize++] = 110;
    participants[currentSize++] = 111;
    participants[currentSize++] = 112;
    participants[currentSize++] = 123;


    insertAtBeginning(200);
    insertAtEnd(201);
    insertAtMiddle(202);

    cout << "List after adding new participants: ";
    displayList();


    deleteFromBeginning();
    deleteFromPosition(3);

    cout << "List after deletions: ";
    displayList();


    cout << "Reversed list: ";
    for (int i = currentSize - 1; i >= 0; i--) {
        cout << participants[i] << " ";
    }
    cout << endl;


    int myId = 123;
    int largest = participants[0];
    int myIdIndex = -1;
    int largestIndex = 0;

    for (int i = 0; i < currentSize; i++) {
        if (participants[i] == myId) {
            myIdIndex = i;
        }
        if (participants[i] > largest) {
            largest = participants[i];
            largestIndex = i;
        }
    }

    if (myIdIndex != -1) {
        cout << "My ID (123) is found at index: " << myIdIndex << endl;
    } else {
        cout << "My ID (123) is not found." << endl;
    }
    cout << "Largest ID in the list is: " << largest << " at index: " << largestIndex << endl;


    int newArray[] = {300, 301, 302};
    int newSize = sizeof(newArray) / sizeof(newArray[0]);
    for (int i = 0; i < newSize ; i++) {
        participants[currentSize++] = newArray[i];
    }

    cout << "List after merging with new array: ";
    displayList();

    return 0; }
