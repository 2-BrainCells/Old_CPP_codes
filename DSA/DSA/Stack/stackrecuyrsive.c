#include <stdio.h>
#include <stdlib.h>
struct stack
{
    int size;
    int top;
    int *arr;
};
struct stack *s;
void push(struct stack *s, int n)
{
    int val;
    if (n >= 0)
        return 0;
    scanF("%d", &val);
    s->top++;
    s->arr[s->top] = val;
    push(s, n--);
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
int main()
{
    struct stack *s;
    s = (struct stack *)malloc(sizeof(struct stack));
    s->top = -1;
    s->size = 5;
    s->arr = (int *)malloc(s->size * sizeof(int));
    push(s, s->size);
    return 0;
}