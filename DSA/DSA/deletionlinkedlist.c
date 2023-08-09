#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
struct Node *head = NULL;
void createList()
{
    struct Node *second, *third;
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    head->data = 12;
    head->next = second;
    second->data = 13;
    second->next = third;
    third->data = 14;
    third->next = NULL;
}
void display(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("%d -> ", ptr->data);
        ptr = ptr->next;
    }
}
void deleteAtBegnning()
{
    struct Node *ptr = head;
    head = head->next;
    free(ptr);
    display(head);
}
void deletingAtIndex(int n)
{
    struct Node *p = head;
    int i = 0;
    while (i < n - 1)
    {
        p = p->next;
        i++;
    }
    struct Node *q = p->next;
    p->next = q->next;
    free(q);
    display(head);
}
int counter()
{
    struct Node *p = head;
    int count = 0;
    while (p != NULL)
    {
        p = p->next;
        count++;
    }
    return count;
}
void deletingLastNode()
{
    int count = counter();
    struct Node *p = head;
    int i = 1;
    while (i != count - 1)
    {
        p = p->next;
        // printf(" %d ", i);
        i++;
    }
    struct Node *q = p->next;
    p->next = NULL;
    // printf(" %d ", q);
    // printf(" %d ", p);
    // free(q);
    // printf(" %d ", q);

    // printf(" %d ", p);
    display(head);
}
void deletingAfterNode()
{
    struct Node *ptr = head;
    int count = counter();
    

}
int main()
{
    createList();
    // display(head);
    // deleteAtBegnning();
    // deletingAtIndex(2);
    deletingLastNode();

    return 0;
}