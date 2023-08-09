#include <stdio.h>
#include <stdlib.h>
struct stack
{
    int top;
    int size;
    int *arr;
};
void push(struct stack *s, int val)
{
    if (s->top == s->size)
    {
        printf("The stack is full \n");
    }
    else
    {
        s->top++;
        s->arr[s->top] = val;
    }
}
void pop(struct stack *s)
{
    if (s->top == -1)
    {
        printf("Stack Underflow");
    }
    else
    {
        int val;
        val = s->arr[s->top];
        s->top--;
        printf("%d \n", val);
    }
} 
int main()
{
    struct stack *s;
    s = (struct stack *)malloc(sizeof(struct stack));
    s->top = -1;
    printf("Enter the size of the stack = ");
    scanf("%d", &s->size);
    s->arr = (int *)malloc(s->size * sizeof(int));
    push(s, 2);
    push(s, 3);
    push(s, 6);
    push(s, 8);
    push(s, 10);
    pop(s);
    pop(s);
    pop(s);
    return 0;
}