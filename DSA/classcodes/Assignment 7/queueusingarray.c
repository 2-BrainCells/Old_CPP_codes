#include <stdio.h>
#include <stdlib.h>
struct queue
{
    int front;
    int rear;
    int size;
    int *arr;
};
void enqueu(struct queue *q, int val)
{
    if (q->rear == q->size)
    {
        printf("Queue is full \n");
        return;
    }
    if (q->rear == -1)
    {
        q->front = 0;
        q->rear = 0;
    }
    q->arr[q->rear] = val;
    q->rear++;
}
void dequeu(struct queue *q)
{
    if (q->front == q->size)
    {
        printf("Queue is empty\n");
        return;
    }
    else if (q->front != q->rear)
    {
        int val;
        val = q->arr[q->front];
        q->front++;
        printf("%d ", val);
    }
    else
    {
        q->front = -1;
        q->rear = -1;
        printf("%d ", q->arr[q->front]);
    }
}
int main()
{
    struct queue *q = (struct queue *)malloc(sizeof(struct queue));
    q->front = -1;
    q->rear = -1;
    scanf("%d", &q->size);
    q->arr = (int *)malloc(q->size * sizeof(int *));
    enqueu(q, 23);
    enqueu(q, 45);
    dequeu(q);
    dequeu(q);

    return 0;
}