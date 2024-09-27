#include <stdio.h>
#include <stdlib.h>
typedef struct stack1
{
    int size;
    int *arr;
    int top;
} stack;
int isfull(stack *s)
{
    if (s->top == s->size - 1)
    {
        return 1;
    }
    return 0;
}
int isempty(stack *s)
{
    if (s->top == -1)
    {
        return 1;
    }
    return 0;
}
void push(stack *s, int data)
{
    if (isfull(s))
    {
        printf("stack overflow");
    }
    else
    {
        s->top++;
        s->arr[s->top] = data;
    }
}
int pop(stack *s)
{
    if (isempty(s))
    {
        printf("stack underflow\n");
        return -1;
    }
    int val = s->arr[s->top];
    s->top--;
    return val;
}
int peek(stack *s, int pos)
{
    int index = s->arr[s->top - pos + 1];
    if (index < 0)
    {
        printf("wrong index");
        return -1;
    }
    else
    {
        return index;
    }
}
int top(stack*s){
    return s->arr[s->top];
}
int bottom(stack*s){
    return s->arr[0];
}
int main()
{
    stack *s = (stack *)malloc(sizeof(stack));
    s->size = 8;
    s->top = -1;
    s->arr = (int *)malloc((s->size) * sizeof(int));
    push(s, 1);
    push(s, 2);
    push(s, 3);
    push(s, 4);
    push(s, 5);
    push(s, 6);
    // printf("%d", pop(s));
    printf("%d",bottom(s));
}