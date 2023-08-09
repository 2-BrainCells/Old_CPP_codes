#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
struct Node *head = NULL;
void getData(struct Node *temp)
{
    scanf("%d", &temp->data);
    temp->next = NULL;
}
void insert(int n)
{
    struct Node *tail;
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            head = (struct Node *)malloc(sizeof(struct Node));
            tail = head;
            getData(tail);
        }
        else
        {
            tail->next = (struct Node *)malloc(sizeof(struct Node));
            getData(tail->next);
            tail = tail->next;
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
}
int main()
{

    insert(3);
    display(head);
    free(head);
    return 0;
}