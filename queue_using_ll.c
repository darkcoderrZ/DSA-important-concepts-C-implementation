#include <stdlib.h>
#include <stdio.h>
typedef struct node
{
    int data;
    struct node *next;
} node;
typedef struct queue
{
    node *f;
    node *r;
} queue;
int isfull()
{
    node *n = (node *)malloc(sizeof(node));
    if (n == NULL)
    {
        return 1;
    }
    free(n);
    return 0;
}
int isempty(queue *q)
{
    if (q->f == NULL)
    {
        return 1;
    }
    return 0;
}
void enqueue(queue *q, int val)
{
    if (!isfull())
    {
        node *n = (node *)malloc(sizeof(node));
        n->data = val;
        n->next = NULL;
        if (isempty(q))
        {
            q->f = n;
            q->r = n;
        }
        else
        {
        q->r->next = n;
        q->r = n;
        }
    }
    else
    {
        printf("queue overflow");
    }
}
int dequeue(queue *q)
{
    int val = -1;
    if (!isempty(q))
    {
        node *ptr = q->f;
        q->f = q->f->next;
        val = ptr->data;
        free(ptr);
        return val;
    }
    else
    {
        printf("queue underflow");
        return val;
    }
}
int main()
{
    queue *q = (queue *)malloc(sizeof(queue));
    q->f = NULL;
    q->r = NULL;
    return 0;
}
