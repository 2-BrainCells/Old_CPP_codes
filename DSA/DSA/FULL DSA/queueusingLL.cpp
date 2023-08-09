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
    ~Node()
    {
        int val = this->data;
        if (this->next != NULL)
        {
            delete this;
            this->next = NULL;
        }
        cout << "Memory is free for = " << val << endl;
    }
};
void enqueue(Node *&head, Node *&tail, int data)
{
    Node *temp = new Node(data);
    head->next = temp;
    tail = temp;
}
void dequeue(Node *&head, Node *&tail)
{
    if (head == NULL)
    {
        cout << "The queue is empty" << endl;
    }
    Node *temp = head;
    head = head->next;
    temp->next = NULL;
    delete temp;
}
void display(Node *ptr)
{
    while (ptr != NULL)
    {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
}
int main()
{
    Node *node1 = new Node(10);
    Node *head = node1;
    Node *tail = node1;
    enqueue(head, tail, 14);
    cout << head << " " << tail << endl;
    enqueue(head, tail, 18);
    cout << head << " " << tail << endl;
    dequeue(head, tail);
    dequeue(head, tail);
    dequeue(head, tail);
    display(head);
    return 0;
}