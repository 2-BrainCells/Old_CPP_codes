#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
void display(struct Node *ptr)
{
    struct Node *temp = ptr;
    do
    {
        printf("%d -> ", ptr->data);
        ptr = ptr->next;
    } while (temp != ptr);
}
struct Node *enqueue(struct Node *tail, int val, int element)
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
struct Node *dequeue(struct Node *tail, int element)
{
    struct Node *prev = tail;
    if (tail == NULL)
    {
        printf("Queue is empty");
    }
    else
    {
        struct Node *curr = tail->next;
        int val;
        while (curr->data != element)
        {
            prev = prev->next;
            curr = curr->next;
        }
        val = curr->data;
        printf("value deleted = %d \n", val);

        prev->next = curr->next;
        curr->next = NULL;
        free(curr);
    }
    return prev;
}

int main()
{
    struct Node *tail = NULL;
    tail = enqueue(tail, 3, 4);
    tail = enqueue(tail, 5, 3);
    tail = enqueue(tail, 8, 3);
    tail = enqueue(tail, 10, 3);
    display(tail);
    printf("\n");
    tail = dequeue(tail, 3);
    display(tail);
    printf("\n");
    tail = dequeue(tail, 5);
    display(tail);
    return 0;
}