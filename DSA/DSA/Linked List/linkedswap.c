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
// void swap(struct Node *ptr, int n)
// {
//     struct Node *p;
//     p = ptr->next;
//     if (n % 2 == 0)
//     {
//         while (ptr != NULL)
//         {
//             struct Node *temp = ptr->next;
//             ptr->next = p->next;
//             p->next = temp;
//             ptr = ptr->next->next;
//             p = p->next->next;
//         }
//     }
//     else
//     {
//         while (ptr->next != NULL)
//         {
//             struct Node *temp;
//             temp = ptr->next;
//             ptr->next = p;
//             p.me = temp;
//             ptr = ptr->next->next;
//             p = p->next->next;
//         }
//     }
//     display(head);
// }
int main()
{
    int n = 5;
    enter(n);
    // swap(head, n);?
    display(head);
    return 0;
}