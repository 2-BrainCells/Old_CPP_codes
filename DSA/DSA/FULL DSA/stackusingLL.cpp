#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
void push(Node *&head, int data)
{
    Node *temp = new Node(data);
    temp->next = head;
    head = temp;
}
void pop(Node *&head)
{
    Node *temp = head;
    head = head->next;
    temp->next = NULL;
    delete temp;
}
void peek(Node *&head)
{
    if (head == NULL)
    {
        cout << "Stack Underflow" << endl;
    }
    cout << head->data << endl;
}
void isEmpty(Node *&head)
{
    if (head == NULL)
    {
        cout << "Stack Underflow" << endl;
    }
}
void display(Node *ptr)
{
    while (ptr != NULL)
    {
        cout << ptr->data << " -> ";
        ptr = ptr->next;
    }
}
int main()
{
    Node *node1 = new Node(10);
    Node *head = node1;
    Node *tail = node1;
    push(head, 23);
    push(head, 45);
    pop(head);
    peek(head);
    pop(head);
    pop(head);
    peek(head);
    // display(head);
    return 0;
}