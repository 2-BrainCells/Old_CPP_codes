#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next; 
    // pointer to structure
};
struct Node *head;
// declaring the first element of the Linked List
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
            getData(tail);
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
void insertionAtBeg(struct Node *ptr)
{
    struct Node *insert;
    insert = (struct Node *)malloc(sizeof(struct Node));
    insert->data = 1;
    insert->next = head;
    head = insert;
    display(head);
}
void insertionAtPos(struct Node *ptr, int n)
{
    struct Node *p;
    p = ptr->next;
    for (int i = 1; i < n - 1; i++)
    {
        ptr = ptr->next;
        p = p->next;
    }
    struct Node *temp;
    temp = (struct Node *)malloc(sizeof(struct Node));
    temp->data = 45;
    temp->next = p;
    ptr->next = temp;
    display(head);
}
void insertionAtEnd(struct Node *ptr)
{
    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    struct Node *temp;
    temp = (struct Node *)malloc(sizeof(struct Node));
    temp->data = 89;
    ptr->next = temp;
    temp->next = NULL;
    display(head);
}
int main()
{
    enter(4);
    insertionAtBeg(head);
    // insertionAtPos(head, 2);
    // insertionAtEnd(head);
    // display(head);
    return 0;
}