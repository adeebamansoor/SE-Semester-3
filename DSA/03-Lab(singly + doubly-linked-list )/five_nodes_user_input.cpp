#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
};

int main()
{
    Node* head = NULL;
    Node* tail = NULL;

    for (int i = 1; i <= 5; i++)
    {
        Node* newNode = new Node;

        cout << "Enter value " << i << ": ";
        cin >> newNode->data;

        newNode->next = NULL;

        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
    }

    Node* temp = head;
    int count = 0;

    cout << "Linked List: ";
    while (temp != NULL)
    {
        cout << temp->data << " -> ";
        count++;
        temp = temp->next;
    }

    cout << "NULL" << endl;
    cout << "Total nodes: " << count << endl;

    temp = head;
    while (temp != NULL)
    {
        Node* nextNode = temp->next;
        delete temp;
        temp = nextNode;
    }

    return 0;
}
