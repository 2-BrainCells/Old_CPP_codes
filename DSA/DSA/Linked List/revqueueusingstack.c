#include <stdio.h>
#include <stdlib.h>
struct queue
{
    int top;
    int rear;
    int *arr;
    int size;
};
void enqueue(struct queue *q)
{
}
int main()
{
    struct queue *q;
    q = (struct queue *)malloc(sizeof(struct queue *));
    q->top = q->rear = -1;
    q->arr = (int *)malloc(q->size * sizeof(int *));
    
    return 0;
}