#include <iostream>
using namespace std;

// A node in a doubly linked list
struct Node
{
    int data;
    Node* prev;
    Node* next;
};

int main()
{
    Node* head = NULL;
    Node* tail = NULL;

    // Create five nodes dynamically and get values from the user
    for (int i = 1; i <= 5; i++)
    {
        Node* newNode = new Node;

        cout << "Enter value " << i << ": ";
        cin >> newNode->data;

        newNode->prev = tail;
        newNode->next = NULL;

        if (head == NULL)
        {
            // First node in the list
            head = newNode;
            tail = newNode;
        }
        else
        {
            // Connect the previous last node to the new node
            tail->next = newNode;
            tail = newNode;
        }
    }

    // Forward traversal from the first node
    cout << "\nForward Traversal:\n";
    Node* temp = head;
    int count = 0;

    while (temp != NULL)
    {
        cout << temp->data << " <-> ";
        count++;
        temp = temp->next;
    }
    cout << "NULL" << endl;

    // Backward traversal from the last node
    cout << "\nBackward Traversal:\n";
    temp = tail;

    while (temp != NULL)
    {
        cout << temp->data << " <-> ";
        temp = temp->prev;
    }
    cout << "NULL" << endl;

    cout << "\nTotal Nodes: " << count << endl;

    // Delete all nodes and release allocated memory
    temp = head;
    while (temp != NULL)
    {
        Node* nextNode = temp->next;
        delete temp;
        temp = nextNode;
    }

    return 0;
}
