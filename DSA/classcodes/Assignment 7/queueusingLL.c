#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
struct Node *head = NULL;
void display(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
}
struct Node *enqueue(struct Node *ptr, int val)
{
    struct Node *temp;
    temp = (struct Node *)malloc(sizeof(struct Node *));
    temp->data = val;
    ptr->next = temp;
    temp->next = NULL;
    ptr = ptr->next;
    return ptr;
}
struct Node *dequeue(struct Node *ptr)
{
    int val;
    struct Node *temp = ptr;
    if (temp == NULL)
    {
        printf("Queue is empty \n");
    }
    val = temp->data;
    ptr = ptr->next;
    free(temp);
    printf("The value that is removed is = %d\n", val);
    return ptr;
}
int main()
{
    head = (struct Node *)malloc(sizeof(struct Node));
    head->data = 23;
    head->next = NULL;
    struct Node *tail;
    tail = head;
    tail = enqueue(tail, 56);
    tail = enqueue(tail, 78);
    tail = enqueue(tail, 88);
    display(head);
    head = dequeue(head);
    head = dequeue(head);
    head = dequeue(head);
    head = dequeue(head);
    head = dequeue(head);
    return 0;
}