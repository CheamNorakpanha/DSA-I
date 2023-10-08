#include <iostream>

struct Node
{
    int data;
    Node* prev;
    Node* next;
};

void printForward(Node* head)
{
    std::cout << "Printing the list forward: ";
    while (head != nullptr)
    {
        std::cout << head->data << " ";
        head = head->next;
    }
    std::cout << std::endl;
}

void printBackward(Node* tail)
{
    std::cout << "Printing the list backward: ";
    while (tail != nullptr)
    {
        std::cout << tail->data << " ";
        tail = tail->prev;
    }
    std::cout << std::endl;
}

int main()
{
    // Create the nodes
    Node* first = new Node();
    Node* second = new Node();
    Node* third = new Node();
    Node* fourth = new Node();
    Node* last = new Node();

    // Assign data to the nodes
    first->data = 43;
    second->data = 26;
    third->data = 19;
    fourth->data = 22;
    last->data = 38;

    // Link the nodes together
    first->prev = nullptr;
    first->next = second;

    second->prev = first;
    second->next = third;

    third->prev = second;
    third->next = fourth;

    fourth->prev = third;
    fourth->next = last;

    last->prev = fourth;
    last->next = nullptr;

    // Print the list forward
    printForward(first);

    // Print the list backward
    printBackward(last);

    // Free the memory
    delete first;
    delete second;
    delete third;
    delete fourth;
    delete last;

    return 0;
}
