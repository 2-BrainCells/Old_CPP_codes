#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
// struct Node *head = NULL;
struct Node *enter(struct Node *ptr, int val)
{
    struct Node *temp;
    temp = (struct Node *)malloc(sizeof(struct Node *));
    temp->data = val;
    ptr->next = temp;
    temp->next = NULL;
    ptr = ptr->next;
    return ptr;
}
void display(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("%d -> ", ptr->data);
        ptr = ptr->next;
    }
    printf("NULL");
}
void reverse(struct Node *head)
{
    struct Node *curr, *prev, *forward;
    curr = head;
    prev = NULL;
    forward = NULL;
    while (curr != NULL)
    {
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
    }
    head = prev;
    display(head);
}
int main()
{
    struct Node *node1 = (struct Node *)malloc(sizeof(struct Node *));
    node1->data = 12;
    node1->next = NULL;
    struct Node *head = node1;
    struct Node *tail = node1;
    tail = enter(tail, 23);
    tail = enter(tail, 34);
    display(head);
    printf("\n");
    reverse(head);
    return 0;
}