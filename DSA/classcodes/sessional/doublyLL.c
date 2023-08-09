#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;
};
struct Node *enter(struct Node *tail, int data, int position)
{
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
    temp->data = data;
    temp->next = NULL;
    temp = tail;
    if (position == 1)
    {
        
    }
}
int main()
{
    return 0;
}