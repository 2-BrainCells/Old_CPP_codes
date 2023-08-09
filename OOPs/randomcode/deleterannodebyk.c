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
    printf("Enter the data = ");
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
            getData(head);
            tail = head;
        }
        tail->next = (struct Node *)malloc(sizeof(struct Node));
        getData(tail->next);
        tail = tail->next;
    }
}
void display(struct Node *ptr, int n)
{
    int i = 0;
    while (i <= n)
    {
        printf("%d -> ", ptr->data);
        ptr = ptr->next;
        i++;
    }
}
void deleteK(struct Node *ptr, int n, int k)
{
    struct Node *p = ptr->next;
    for (int i = 1; i < n; i++)
    {
        if ((i % k) - 1 == 0)
        {
            ptr->next = p->next;
            free(p);
        }
        ptr = ptr->next;
        p = p->next;
    }
    display(head, 6);
}
int main()
{
    enter(6);
    deleteK(head, 6, 2);
    return 0;
}