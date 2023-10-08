#include<iostream>
using namespace std;

class Node
{
public:
    int data;
    class Node *link;
};
class Node *head = NULL;
int main()
{
    Node head;
    Node body1;
    head.data = 45;
    head.link = &body1;
    body1.data = 50;
    cout << head.data;
    cout << body1.data;
}