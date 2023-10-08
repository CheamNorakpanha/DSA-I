#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
};

class LinkedList {
public:
    Node* head;

    LinkedList() {
        head = nullptr;
    }

    void insertNode(int data) {
        Node* newNode = new Node();
        newNode->data = data;
        newNode->next = nullptr;

        if (head == nullptr) {
            head = newNode;
            return;
        }

        Node* current = head;
        while (current->next != nullptr) {
            current = current->next;
        }
        current->next = newNode;
    }

    void printList() {
        Node* current = head;

        while (current != nullptr) {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }

    bool searchNode(int data, Node*& p1, Node*& p2) {
        p1 = nullptr;
        p2 = head;

        while (p2 != nullptr && p2->data < data) {
            p1 = p2;
            p2 = p2->next;
        }

        if (p2 != nullptr && p2->data == data) {
            return true;
        } else {
            return false;
        }
    }

    void sortLinkedList() {
        if (head == nullptr) {
            return;
        }

        bool swapped;
        Node* left;
        Node* right = nullptr;

        do {
            swapped = false;
            left = head;

            while (left->next != right) {
                if (left->data > left->next->data) {
                    swap(left->data, left->next->data);
                    swapped = true;
                }
                left = left->next;
            }
            right = left;
        } while (swapped);
    }
};

int main() {
    LinkedList list;

    // Insert nodes
    list.insertNode(4);
    list.insertNode(2);
    list.insertNode(1);
    list.insertNode(3);

    // Print unsorted list
    cout << "Unsorted list: ";
    list.printList();

    // Sort list
    list.sortLinkedList();

    // Print sorted list
    cout << "Sorted list: ";
    list.printList();

    // Search for node with data value 3
    Node* p1, *p2;
    if (list.searchNode(3, p1, p2)) {
        cout << "Node with value 3 found in the list." << endl;
    } else {
        cout << "Node with value 3 not found in the list." << endl;
    }

    return 0;
}
