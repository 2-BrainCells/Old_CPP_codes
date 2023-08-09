#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    int expo;
    struct Node *next;
};
struct Node *enter(struct Node *ptr, int data, int expo)
{
    if (ptr == NULL)
    {
        struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
        temp->data = data;
        temp->expo = expo;
        temp->next = NULL;
        ptr = temp;
    }
    else
    {
        struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
        temp->data = data;
        temp->expo = expo;
        ptr->next = temp;
        temp->next = NULL;
        ptr = ptr->next;
    }
    return ptr;
}
void display(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("%d %d -> ", ptr->data, ptr->expo);
        ptr = ptr->next;
    }
}
int main()
{
    struct Node *tail = NULL;
    printf("%d ", tail);
    tail = enter(tail, 3, 0);
    printf("%d ", tail);
    tail = enter(tail, 5, 2);
    printf("%d ", tail);

    tail = enter(tail, 0, 6);
    printf("%d ", tail);

    tail = enter(tail, 9, 6);
    printf("%d ", tail);

    display(head);
    return 0;
}