#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int size;
    int top;
    int *arr;
};
void push(struct stack *s)
{
    int val;
    if (s->top == s->size - 1)
    {
        printf("Stack is full");
    }
    else
    {
        scanf("%d", &val);
        s->top++;
        s->arr[s->top] = val;
    }
}
void pop(struct stack *s)
{
    int val;
    if (s->top == -1)
        printf("Stack Under Flow");
    else
    {
        val = s->arr[s->top];
        s->top--;
        printf("%d ", val);
    }
}
void peak(struct Node * s)
{
    
}
int main()
{
    struct stack *s;
    s = (struct stack *)malloc(sizeof(struct stack));
    s->top = -1;
    s->size = 4;
    s->arr = (int *)malloc(s->size * sizeof(int));
    push(s);
    push(s);
    push(s);
    push(s);
    pop(s);
    pop(s);
    pop(s);
    pop(s);
    return 0;
}