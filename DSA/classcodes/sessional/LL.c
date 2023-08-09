#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
struct Node *enter(struct Node *tail, int data)
{
    if (tail == NULL)
    {
        struct Node *temp;
        temp = (struct Node *)malloc(sizeof(struct Node));
        temp->data = data;
        temp->next = NULL;
        tail = temp;
    }
    else
    {
        struct Node *temp;
        temp = (struct Node *)malloc(sizeof(struct Node));
        temp->data = data;
        temp->next = NULL;
        tail->next = temp;
    }
    return tail;
}
struct Node *insertion(struct Node *tail, int data, int position)
{
    struct Node *temp;
    temp = (struct Node *)malloc(sizeof(struct Node));
    temp->data = data;
    temp->next = NULL;
    if (position == 1)
    {
        temp->next = tail;
        tail = temp;
    }
    else
    {
        struct Node *temp1 = tail;
        int i = 0;
        while (position - 1 != i)
        {
            temp1 = temp1->next;
            i++;
        }
        struct Node *ptr = temp1->next;
        temp1->next = temp;
        temp->next = ptr;
    }
    return tail;
}
struct Node *deletion(struct Node *tail, int position)
{
    struct Node *temp = tail;
    if (position == 1)
    {
        tail = temp->next;
        temp->next = NULL;
        free(temp);
    }
    else
    {
        struct Node *ptr = NULL;
        int i = 0;
        while (position - 1 != i)
        {
            ptr = temp;
            temp = temp->next;
            i++;
        }
        ptr->next = temp->next;
        temp->next = NULL;
        free(temp);
    }
    return tail;
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

    // struct Node *head = NULL;
    struct Node *tail = NULL;
    tail = enter(tail, 23);
    tail = insertion(tail, 34, 1);
    tail = insertion(tail, 45, 2);
    tail = insertion(tail, 78, 3);
    display(tail);
    printf("\n");
    tail = deletion(tail, 1);
    tail = deletion(tail, 3);
    display(tail);
    free(tail);
    return 0;
}