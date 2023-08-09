#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
struct Node *head;
void getVal(struct Node *p)
{
    printf("Enter the data = ");
    scanf("%d", &p->data);
    p->next = NULL;
}
void enter(int n)
{
    struct Node *last = NULL;
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            head = (struct Node *)malloc(sizeof(struct Node));
            last = head;
            getVal(last);
        }
        else
        {
            last->next = (struct Node *)malloc(sizeof(struct Node));
            getVal(last->next);
            last = last->next;
        }
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
void insertAtBegging(struct Node *ptr, int data)
{
    struct Node *insert = (struct Node *)malloc(sizeof(struct Node));
    insert->data = data;
    insert->next = head;
    head = insert;
    display(head);
}
void insertAtEnd(struct Node *ptr, int data)
{
    struct Node *p = (struct Node *)malloc(sizeof(struct Node));
    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    ptr->next = p;
    p->data = data;
    p->next = NULL;
    display(head);
}
void insertAtPos(struct Node *ptr, int data)
{
    int pos;
    printf("Enter the position to be inserted = ");
    scanf("%d", &pos);
    struct Node *p;
    p = ptr->next;
    for (int i = 1; i < pos - 1; i++)
    {
        ptr = ptr->next;
        p = p->next;
    }
    struct Node *temp;
    temp = (struct Node *)malloc(sizeof(struct Node));
    temp->data = data;
    temp->next = p;
    ptr->next = temp;
    display(head);
}
void deleteAtBeginning(struct Node *ptr)
{
    struct Node *p;
    p = head;
    head = ptr->next;
    free(p);
    display(head);
}
void deleteAtEnd(struct Node *ptr)
{
    struct Node *p = ptr->next;
    display(head);
    while (p->next != NULL)
    {
        p = p->next;
        ptr = ptr->next;
    }
    ptr->next = NULL;
    free(p);
    display(head);
}
void deleteAtPos(struct Node *ptr)
{
    int pos;
    struct Node *p = ptr->next;
    printf("Enter the position to be inserted = ");
    scanf("%d", &pos);
    printf("Before deletion \n");
    display(head);
    printf("\n");
    for (int i = 1; i <= pos; i++)
    {
        if (i == pos - 1)
        {
            ptr->next = p->next;
            free(p);
        }
        else
        {
            p = p->next;
            ptr = ptr->next;
        }
    }
    display(head);
}
int main()
{
    int n, m, h, k, data;
    printf("Enter the limit of the linkedlist = ");
    scanf("%d", &m);
    enter(m);
    printf("Enter your choice = \n");
    printf("1. Insertion\n");
    printf("2. Deleltion\n");
    printf("Enter yout choice = ");
    scanf("%d", &n);
    switch (n)
    {
    case 1:
        printf("Enter your choice \n");
        printf("1. Insert At Beginning\n");
        printf("2. Insert At End\n");
        printf("3. Insert At a Position\n");
        printf("Enter your choice = ");
        scanf("%d", &h);
        printf("Enter the data value to be inserted = ");
        scanf("%d", &data);
        switch (h)
        {
        case 1:
            insertAtBegging(head, data);
            break;
        case 2:
            insertAtEnd(head, data);
            break;
        case 3:
            insertAtPos(head, data);
            break;
        }
        break;
    case 2:
        printf("Enter your choice \n");
        printf("1. Delete At Beginning\n");
        printf("2. Delete At End\n");
        printf("3. Delete At a Position\n");
        printf("Enter your choice = ");
        scanf("%d", &k);
        switch (k)
        {
        case 1:
            deleteAtBeginning(head);
            break;
        case 2:
            deleteAtEnd(head);
            break;
        case 3:
            deleteAtPos(head);
            break;
        }
        break;
    }
    free(head);
    return 0;
}