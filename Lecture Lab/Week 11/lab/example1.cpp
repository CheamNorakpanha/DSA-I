#include <iostream>
using namespace std;
struct Node {
    int data;
    Node* prev;
    Node* next;
};

void printForward(Node* head) {
    Node* current = head;
    while (current != nullptr) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}

void printBackward(Node* tail) {
    Node* current = tail;
    while (current != nullptr) {
        cout << current->data << " ";
        current = current->prev;
    }
    cout << endl;
}

int main() {
    Node* head = nullptr;
    Node* tail = nullptr;

    // Create nodes
    Node* node1 = new Node;
    node1->data = 43;
    node1->prev = nullptr;
    node1->next = nullptr;

    Node* node2 = new Node;
    node2->data = 38;
    node2->prev = nullptr;
    node2->next = nullptr;

    // Link nodes
    head = node1;
    node1->next = node2;
    node2->prev = node1;
    tail = node2;

    // Print forward
    cout << "Forward direction: ";
    printForward(head);

    // Print backward
    cout << "Backward direction: ";
    printBackward(tail);

    // Clean up memory
    delete node1;
    delete node2;

    return 0;
}
