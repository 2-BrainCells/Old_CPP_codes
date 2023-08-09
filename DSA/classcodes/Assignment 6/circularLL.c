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
void display(struct Node *ptr)
{
    struct Node *temp = ptr;
    do
    {
        printf("%d -> ", ptr->data);
        ptr = ptr->next;
    } while (temp != ptr);
}
int main()
{
    struct Node *tail = NULL;
    printf("%d " , tail);
    tail = enter(tail, 3, 4);
    tail = enter(tail, 5, 3);
    tail = enter(tail, 8, 3);
    printf("%d \n" , tail);
    display(tail);
    return 0;
}