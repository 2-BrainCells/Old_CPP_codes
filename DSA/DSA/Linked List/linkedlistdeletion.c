#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
struct Node *head;
void getData(struct Node *ptr)
{
    printf("Enter the value of the node = ");
    scanf("%d", &ptr->data);
    ptr->next = NULL;
}
void enter(int n)
{
    struct Node *tail;
    for (int i = 0; i < n - 1; i++)
    {
        if (i == 0)
        {
            head = (struct Node *)malloc(sizeof(struct Node));
            tail = head;
            getData(head);
        }
        tail->next = (struct Node *)malloc(sizeof(struct Node));
        getData(tail->next);
        tail = tail->next;
    }
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
void deletionAtBeg(struct Node *ptr)
{
    struct Node *p;
    p = ptr->next;
    head = p;
    free(ptr);
    display(head);
}
void deletionAtPos(struct Node *ptr, int n)
{
    struct Node *p = ptr->next;
    for (int i = 1; i < n - 1; i++)
    {
        ptr = ptr->next;
        p = p->next;
    }
    ptr->next = p->next;
    free(p);
    display(head);
}
void deletionAtEnd(struct Node *ptr)
{
    struct Node *p = ptr->next;
    while (p->next != NULL)
    {
        p = p->next;
        ptr = ptr->next;
    }
    ptr->next = NULL;
    free(p);
    display(head);
}
int main()
{
    enter(4);
    // display(head);
    // deletionAtBeg(head);
    // deletionAtPos(head, 2);
    // deletionAtEnd(head);
    free(head);
    return 0;
}