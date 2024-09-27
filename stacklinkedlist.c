#include <stdio.h>
#include <stdlib.h>
typedef struct node1
{
    int data;
    struct node1 *next;
} node;

int isFull()
{
    node *n = (node *)malloc(sizeof(node));
    if (n != NULL)
    {
        free(n);
        return 0;
    }
    else
    {
        return 1;
    }
}
int isEmpty(node *top)
{
    if (top == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
node *push(node *top, int value)
{
    if (isFull())
    {
        printf("stack overflow\n");
    }
    else
    {
        node *n = (node *)malloc(sizeof(node));
        n->next = top;
        n->data = value;
        top = n;
        return top;
    }
}
int pop(node **top)
{
    if (isEmpty(*top))
    {
        printf("stack underflow\n");
        return -1;
    }
    else
    {
        node *n = (*top);
        int val = (*top)->data;
        (*top) = (*top)->next;
        free(n);
        return val;
    }
}
int peek(node *top, int ind)
{
    while (--ind)
    {
        top = top->next;
    }
    if(top!=NULL){
    return top->data;
    }
    else{
        return -1;
    }
}
int top(node *top)
{
    return top->data;
}
int bottom(node*top)
{
    while (top->next != NULL)
    {
        top = top->next;
    }
    return top->data;
}
int main()
{
    node *top=NULL;
    top=push(top,1);
    top=push(top,2);
    top=push(top,3);
    top=push(top,4);
    top=push(top,5);
    int n=peek(top,6);
    printf("%d",n);
}