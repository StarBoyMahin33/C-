#include<iostream>
using namespace std;

class node
{
public:
    int data;
    node* next;

    node(int value)
    {
        data = value;
        next = nullptr; // initially next = nullptr;
    }
};

void insertAtFirst(node* &head, int value)
{
    node* newNode = new node(value);
    newNode->next = head;
    head = newNode;
}

void insertAtLast(node* &head, int value)
{
    node* newNode = new node(value);

    if(head == nullptr)
    {
        head = newNode;
        return;
    }

    node* temp = head;
    while(temp->next != nullptr)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}

void insertAtAnyPosition(node* &head, int position, int value)
{
    node* newNode = new node(value);
    if(position <= 0)
    {
        cout << "Invalid Position.." << endl;
        return;
    }

    if(position == 1)
    {
        insertAtFirst(head, value);
        return;
    }

    node* temp = head;
    for(int i = 1; i < position - 1; i++)
    {
        if(temp == nullptr)
        {
            cout << "Position out of bound.." << endl;
            return;
        }
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
}

void deleteAtFirst(node* &head)
{
    if(head == nullptr)
    {
        cout << "List is empty. Nothing to delete." << endl;
        return;
    }
    node* temp = head;
    head = head->next;
    delete temp;
}

void deleteAtLast(node* &head)
{
    if(head == nullptr)
    {
        cout << "List is empty. Nothing to delete." << endl;
        return;
    }

    if(head->next == nullptr) // Only one node
    {
        delete head;
        head = nullptr;
        return;
    }

    node* temp = head;
    while(temp->next->next != nullptr)
    {
        temp = temp->next;
    }
    delete temp->next;
    temp->next = nullptr;
}

void deleteAtAnyPosition(node* &head, int position)
{
    if(head == nullptr || position <= 0)
    {
        cout << "Invalid Position or List is empty." << endl;
        return;
    }

    if(position == 1)
    {
        deleteAtFirst(head);
        return;
    }

    node* temp = head;
    for(int i = 1; i < position - 1; i++)
    {
        if(temp == nullptr || temp->next == nullptr)
        {
            cout << "Position out of bound." << endl;
            return;
        }
        temp = temp->next;
    }

    node* nodeToDelete = temp->next;
    if(nodeToDelete == nullptr)
    {
        cout << "Position out of bound." << endl;
        return;
    }
    temp->next = nodeToDelete->next;
    delete nodeToDelete;
}

int search(node* &head, int key)
{
    node* temp = head;
    while(temp != nullptr)
    {
        if(temp->data == key)
        {
            return 1;
        }
        temp = temp->next;
    }
    return 0;
}

node* middleNode(node* start, node* end)
{
    if(start == nullptr)
        return nullptr;

    node* slow = start;
    node* fast = start->next;

    while(fast != end)
    {
        fast = fast->next;
        if(fast != end)
        {
            slow = slow->next;
            fast = fast->next;
        }
    }
    return slow;
}

bool binarySearch(node* head, int key)
{
    node* start = head;
    node* end = nullptr;

    while(start != end)
    {
        node* mid = middleNode(start, end);
        if(mid == nullptr)
            return false;

        if(mid->data == key)
            return true;
        else if(mid->data < key)
            start = mid->next;
        else
            end = mid;
    }
    return false;
}

void display(node* head)
{
    node* temp = head;

    while(temp != nullptr)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "null " << endl;
}
int main()
{
    node* head = nullptr;

    // Demonstrating insertions
    insertAtLast(head, 30);
    insertAtLast(head, 40);
    insertAtLast(head, 50);
    cout << "List after inserting at last positions: ";
    display(head);

    insertAtFirst(head, 20);
    insertAtFirst(head, 10);
    cout << "List after inserting at first positions: ";
    display(head);

    // Inserting 35 at position 4 as example
    insertAtAnyPosition(head, 4, 35);
    cout << "List after inserting 35 at position 4: ";
    display(head);

    // Demonstrate deletion operations
    deleteAtFirst(head);
    cout << "List after deleting at first position: ";
    display(head);

    deleteAtLast(head);
    cout << "List after deleting at last position: ";
    display(head);

    int deletePos;
    cout << "Enter position to delete: ";
    cin >> deletePos;
    deleteAtAnyPosition(head, deletePos);
    cout << "List after deleting at position " << deletePos << ": ";
    display(head);

    // Linear search demonstration
    int key;
    cout << "Enter element to search using linear search: ";
    cin >> key;
    int result = search(head, key);
    if(result)
        cout << "Element " << key << " found using linear search." << endl;
    else
        cout << "Element " << key << " not found using linear search." << endl;

    // Binary search demonstration (list should be sorted)
    cout << "Enter element to search using binary search (list must be sorted): ";
    cin >> key;
    bool found = binarySearch(head, key);
    if(found)
        cout << "Element " << key << " found using binary search." << endl;
    else
        cout << "Element " << key << " not found using binary search." << endl;

    return 0;
}
