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
        int value = this->data;
        if (this->next != NULL)
        {
            delete this;
            this->next = NULL;
        }
        cout << "memory if free for the node with data " << value << endl;
    }
};
void insertAtHead(Node *&head, int data)
{
    Node *temp = new Node(data);
    temp->next = head;
    head = temp;
}
void insertAtTail(Node *&tail, int data)
{
    Node *temp = new Node(data);
    tail->next = temp;
    tail = tail->next;
}
void insertAtMiddle(Node *&head, int data, int pos, Node *&tail)
{
    // insert at beginning
    if (pos == 1)
    {
        insertAtHead(head, data);
        return;
    }

    // insert at mid
    Node *temp = head;
    int i = 1;
    while (i != pos - 1)
    {
        temp = temp->next;
        i++;
    }
    Node *nodeinsert = new Node(data);
    nodeinsert->next = temp->next;
    temp->next = nodeinsert;

    // insert at end
    if (temp->next == NULL)
    {
        insertAtTail(tail, data);
    }
}
void deleteNode(int position, Node *&head, Node *&tail)
{
    // first
    if (position == 1)
    {
        Node *temp = head;
        head = head->next;
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
        pre->next = curr->next;
        curr->next = NULL;
        tail = pre;
        delete curr;
    }
}
void print(Node *&ptr)
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
    cout << node1->data << endl;
    cout << node1->next << endl;
    Node *head = node1;
    Node *tail = node1;
    // nodeinsertAtHead(head, 12);
    // insertAtHead(head, 12);
    insertAtTail(tail, 12);
    insertAtTail(tail, 15);
    insertAtMiddle(head, 82, 1, tail);

    deleteNode(3, head, tail);
    cout << tail->data << endl;
    deleteNode(3, head, tail);
    cout << tail->data << endl;
    deleteNode(2, head, tail);
    cout << tail->data << endl;
    deleteNode(1, head, tail);

    print(head);
    // delete head;
    return 0;
}