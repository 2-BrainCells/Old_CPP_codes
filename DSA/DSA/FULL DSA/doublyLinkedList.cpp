#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *prev;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }
    ~Node()
    {
        int val = this->data;
        if (next != NULL)
        {
            delete next;
            next = NULL;
        }
        cout << "Memory free for node with data = " << val << endl;
    }
};
void insertionAtHead(Node *&head, int data)
{
    if (head == NULL)
    {
        Node *temp = new Node(data);
        head = temp;
    }
    else
    {
        Node *temp = new Node(data);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}

void insertAtTail(Node *&tail, int data)
{
    if (tail == NULL)
    {
        Node *temp = new Node(data);
        tail = temp;
    }
    else
    {
        Node *temp = new Node(data);
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }
}
void insertAtMiddle(Node *&head, Node *&tail, int position, int data)
{
    if (position == 1)
    {
        insertionAtHead(head, data);
        return;
    }

    Node *temp = new Node(data);
    Node *curr = head;
    Node *pre = NULL;
    int i = 1;
    while (i < position)
    {
        pre = curr;
        curr = curr->next;
        i++;
    }
    pre->next = temp;
    temp->prev = pre;
    temp->next = curr;
    curr->prev = temp;

    if (temp->next == NULL)
    {
        insertAtTail(tail, data);
        return;
    }
}
void deleteNode(int position, Node *&head)
{
    // first
    if (position == 1)
    {
        Node *temp = head;
        head = temp->next;
        temp->next->prev = NULL;
        temp->next = NULL;
        delete temp;
    }
    else
    {
        Node *curr = head;
        Node *pre = NULL;
        int i = 1;
        while (i < position)
        {
            pre = curr;
            curr = curr->next;
            i++;
        }
        curr->prev = NULL;
        pre->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}
void print(Node *head)
{
    Node *temp = head;
    cout << "NULL "
         << "<- ";
    while (temp != NULL)
    {
        cout << temp->data << " -> <- ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}
int main()
{
    Node *node1 = new Node(10);
    Node *head = node1;
    Node *tail = node1;
    insertionAtHead(head, 11);
    insertAtTail(tail, 14);
    print(head);
    insertAtMiddle(head, tail, 3, 45);
    deleteNode(2, head);
    print(head);
    return 0;
}