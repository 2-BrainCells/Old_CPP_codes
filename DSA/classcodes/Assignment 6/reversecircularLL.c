#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};

struct Node *enter(struct Node *tail, int val, int element)
{
    if (tail == NULL)
    {
        struct Node *temp = (struct Node *)malloc(sizeof(struct Node *));
        tail = temp;
        temp->data = val;
        tail->next = tail;
    }
    else
    {
        struct Node *curr = tail;
        while (curr->data != element)
        {
            curr = curr->next;
        }
        struct Node *temp = (struct Node *)malloc(sizeof(struct Node *));
        temp->data = val;
        temp->next = curr->next;
        curr->next = temp;
    }
    return tail;
}
void display(struct Node *tail)
{
    struct Node *temp = tail;
    do
    {
        printf("%d -> ", tail->data);
        tail = tail->next;
    } while (temp != tail);
}
void reverse(struct Node *tail)
{
    struct Node *prev, *curr, *forward;
    prev = NULL;
    curr = tail;
    if (tail == NULL)
    {
        return;
    }
    do
    {
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
    } while (curr != tail);
    tail->next = prev;
    tail = prev;
    display(tail);
}

int main()
{
    struct Node *tail = NULL;
    tail = enter(tail, 3, 4);
    tail = enter(tail, 5, 3);
    tail = enter(tail, 8, 3);
    tail = enter(tail, 90, 5);

    // display(tail);
    reverse(tail);
    return 0;
}