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
    book* newbook = new book(value, s, TD); // Pass the string and TD to the constructor
    newbook->next = head;
    head = newbook;
}

void display(book* head)
{
    book* temp = head;

    while (temp != nullptr)
    {
        cout << temp->name << " -> ";
        temp = temp->next;
    }
    cout << "null " << endl;
}

int main()
{
    book* head = nullptr;
    insertAtFirst(head, 101, "Harry Potter", 5); // Pass head by reference
    insertAtFirst(head, 107, "Hunger Games", 7); // Pass head by reference
    cout << "Book list: ";
    display(head);

    return 0;
}
