#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node* next;
};

class LinkedList
{
public:
    Node* head;
    
    LinkedList()
    {
        head = nullptr;
    }

    // Function to insert a node at the end of the linked list.
    void insertNode(int data)
    {
        Node* newNode = new Node();
        newNode->data = data;
        newNode->next = nullptr;

        if (head == nullptr)
        {
            head = newNode;
            return;
        }

        Node* current = head;
        while (current->next != nullptr)
        {
            current = current->next;
        }
        current->next = newNode;
    }

    // Function to print the linked list.
    void printList() {
        Node* current = head;

        while (current != nullptr)
        {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }

    // Function to delete the node at given position
    void deleteNode(int position)
    {
        Node* current = head;

        if (position == 0)
        {
            head = current->next;
            delete current;
            return;
        }

        for (int i = 0; i < position-1 && current != nullptr; i++)
        {
            current = current->next;
        }

        if (current == nullptr || current->next == nullptr)
        {
            return;
        }

        Node* next = current->next->next;
        delete current->next;
        current->next = next;
    }
};

int main()
{
    LinkedList list;

    // Inset nodes
    list.insertNode(1);
    list.insertNode(2);
    list.insertNode(3);
    list.insertNode(4);

    // Print list
    cout << "Linked list: ";
    list.printList();

    // Delete node at position 2
    list.deleteNode(2);

    // Print updated list
    cout << "Update list: ";
    list.printList();
}
