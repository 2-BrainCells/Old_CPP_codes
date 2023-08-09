#include <stdio.h>
#include <stdlib.h>
struct queue
{

    int *arr;
    int front;
    int rear;
    int size;
};
void enqueue(struct queue *q, int val)
{
    if (q->rear == q->size)
    {
        printf("Queue is full \n");
        return;
    }
    else if (q->rear == -1)
    {
        q->rear = 0;
        q->front = 0;
    }
    q->arr[q->rear] = val;
    q->rear++;
}
int dequeue(struct queue *q)
{
    int val;
    if (q->front == q->rear)
    {
        printf("Queue is empty\n");
        return;
    }
    else if (q->front != q->rear)
    {
        val = q->arr[q->front];
        q->front++;
    }
    else
    {
        q->front = -1;
        q->rear = -1;
        val = q->arr[q->front];
    }
    return val;
}
void display(struct queue *q)
{
    for (int i = q->front; i < q->rear; i++)
    {
        printf("%d ", q->arr[i]);
    }
}
int isempty(struct queue *q)
{
    return q->rear = q->front;
}
void push(struct queue *q1, struct queue *q2, int val)
{
    enqueue(q1, val);
    // printf("%d ", dequeue(q1));
    int v = dequeue(q1);
    enqueue(q2, v);

    display(q1);
    printf("\n");
    display(q2);
    printf("\n");
}
void pop(struct queue *q1, struct queue *q2)
{
}
int main()
{
    struct queue *q1 = (struct queue *)malloc(sizeof(struct queue *));
    struct queue *q2 = (struct queue *)malloc(sizeof(struct queue *));
    scanf("%d %d", &q1->size, &q2->size);
    q1->arr = (int *)malloc(q1->size * sizeof(int *));
    q2->arr = (int *)malloc(q2->size * sizeof(int *));
    q1->front = q2->front = q1->rear = q2->rear = -1;
    push(q1, q2, 23);
    push(q1, q2, 34);
    push(q1, q2, 45);
    return 0;
}