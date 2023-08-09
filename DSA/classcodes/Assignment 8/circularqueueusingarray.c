#include <stdio.h>
#include <stdlib.h>
struct cirqueue
{
    int *arr;
    int front;
    int rear;
    int size;
};
void enqueue(struct cirqueue *q, int val)
{
    if ((q->front == 0 && q->rear == q->size - 1) || (q->rear == (q->front - 1) % (q->size - 1)))
    {
        printf("Queue is full\n");
    }
    else if (q->front == -1)
    {
        q->front = q->rear = 0;
        q->arr[q->rear] = val;
    }
    else if ((q->rear == q->size - 1) && (q->front != 0))
    {
        q->rear = 0;
        q->arr[q->rear] = val;
    }
    else
    {
        q->rear++;
    }
    q->arr[q->rear] = val;
}
void dequeue(struct cirqueue *q)
{
    if (q->front == -1)
    {
        printf("Queue is empty\n");
        return;
    }
    printf("%d \n", q->arr[q->front]);
    if (q->front == q->rear)
    {
        q->front = q->rear = -1;
    }
    else if (q->front == q->size - 1)
    {
        q->front = 0;
    }
    else
    {
        q->front++;
    }
}
int main()
{
    struct cirqueue *q = (struct cirqueue *)malloc(sizeof(struct cirqueue));
    q->front = q->rear = -1;
    scanf("%d", &q->size);
    q->arr = (int *)malloc(q->size * sizeof(int));
    enqueue(q, 12);
    enqueue(q, 23);
    enqueue(q, 34);
    dequeue(q);
    dequeue(q);
    return 0;
}