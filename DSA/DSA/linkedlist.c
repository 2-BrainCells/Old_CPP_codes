#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
struct Node *head;
void linkedTraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("%d %d ", ptr, ptr->next);
        printf("%d \n", ptr->data);
        ptr = ptr->next;
    }
}
// insertion in a linked list
void insert(struct Node *ptr)
{

    struct Node *second;
    struct Node *thrid;
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    thrid = (struct Node *)malloc(sizeof(struct Node));
    head->data = 7;
    head->next = second;
    second->data = 10;
    second->next = thrid;
    thrid->data = 12;
    thrid->next = NULL;
}
void insertionAtBeginning()
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = 16;
    ptr->next = head;
    linkedTraversal(ptr);
}
void insertionInBetween(int n)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node *p = head;
    int i = 0;
    while (i != n - 1)
    {
        p = p->next;
        i++;
    }
    ptr->data = 45;
    ptr->next = p->next;
    p->next = ptr;
    linkedTraversal(head);
}
void insertionAtEnd(struct Node *p)
{
    struct Node *ptr = (struct Node *)
        malloc(sizeof(struct Node));
    ptr->data = 34;
    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = NULL;
    linkedTraversal(head);
}
void insertionAfter(struct Node *p, int nodeAdd)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = 98;
    ptr->next = p->next;
    p->next = ptr;
    linkedTraversal(head);
}

int main()
{
    insert(head);
    linkedTraversal(head);
    // insertionAtBeginning();
    // insertionInBetween(2);
    // insertionAtEnd(head);
    // insertionAfter(head, 2);
    // linkedTraversal(head);
    return 0;
}