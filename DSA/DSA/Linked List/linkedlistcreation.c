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
    printf("Enter the value of the Node = ");
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
int main()
{
    enter(4);
    display(head);
    return 0;
}