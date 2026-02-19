#include <iostream>
using namespace std;

class book
{
public:
    int id;
    string name;
    int td;
    book* next;

    book(int value, string s, int TD)
    {
        id = value;
        name = s;
        td = TD;
        next = nullptr;
    }
};

void insertAtFirst(book* &head, int value, string s, int TD)
{
    book* newbook = new book(value, s, TD);
    newbook->next = head;
    head = newbook;
}

int searchByName(book* head, const string& key) {
    book* temp = head;
    int position = 1;
    int count = 0;

    cout << "Searching for book: \"" << key << "\"\n";

    while (temp != nullptr) {
        if (temp->name == key) {
            cout << "Found at position: " << position << "\n";
            count++;
        }
        temp = temp->next;
        position++;
    }

    return count;
}

void display(book* head)
{
    book* temp = head;

    while (temp != nullptr)
    {
        cout << "( " << temp->id << ", " << temp->name << "," << temp->td << " )-> ";
        temp = temp->next;
    }
    cout << "null " << endl;
}

int main()
{
    book* head = nullptr;
    insertAtFirst(head, 107, "Hunger Games", 7);
    insertAtFirst(head, 111, "Twilight Saga", 9);
    insertAtFirst(head, 107, "Hunger Games", 11);
    insertAtFirst(head, 101, "Harry Potter", 5);


    cout << "Book list: ";
    display(head);

    string searchKey;
    cout << "\nEnter book name to search: ";
    getline(cin, searchKey);

    int foundCount = searchByName(head, searchKey);
    if (foundCount == 0)
        cout << "Book \"" << searchKey << "\" not found in the list." << endl;
    else
        cout << "Total occurrences: " << foundCount << endl;

    return 0;
}

