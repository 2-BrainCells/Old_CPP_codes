#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
struct Node *head = NULL;
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
int count(struct Node *ptr)
{
    int count = 0;
    while (ptr != NULL)
    {
        ptr = ptr->next;
        count++;
    }
    return count;
}
void search(struct Node *ptr, int totalElems, int k)
{
    int elemFind = (totalElems - k);
    for (int i = 0; i < elemFind; i++)
    {
        ptr = ptr->next;
    }
    printf("The %d Elem from the back is = %d", k, ptr->data);
}
int main()
{
    int n;
    printf("Enter the limit of the LL = ");
    scanf("%d", &n);
    enter(n);
    int k;
    printf("Enter the kth element to be seached = ");
    scanf("%d", &k);
    search(head, n, k);
    return 0;
}