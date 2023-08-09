#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
struct Node *head;
void display(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
}
struct Node *push(struct Node *ptr, int val)
{
    struct Node *temp;
    temp = (struct Node *)malloc(sizeof(struct Node));
    temp->data = val;
    temp->next = ptr;
    ptr = temp;
    return ptr;
}
struct Node *pop(struct Node *ptr)
{
    int val;
    struct Node *temp;
    temp = ptr;
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
    head = push(head, 34);
    head = push(head, 45);
    head = pop(head);
    head = pop(head);
    display(head);
    free(head);
    return 0;
}