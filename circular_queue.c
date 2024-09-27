#include <stdio.h>
#include <stdlib.h>
typedef struct queue
{
    int size;
    int f;
    int r;
    int *arr;
} queue;
int isfull(queue *q)
{
    if (q->r+1%q->size==q->f)
    {
        return 1;
    }
    return 0;
}
int isempty(queue *q)
{
    if (q->r == q->f)
    {
        return 1;
    }
    return 0;
}
void enqueue(queue *q, int data)
{
    if (!isfull)
    {
        q->r=q->r+1%q->size;
        q->r=data;
    }
    else
    {
        printf("queue overflow");
    }
}
int dequeue(queue *q)
{
    if (!isempty)
    {
        q->f=q->f+1%q->size;
        return q->arr[q->f];
    }
    else
    {
        printf("queue underflow");
    }
    return -1;
}
int main()
{
    queue *q = (queue *)malloc(sizeof(queue));
    q->size = 10;
    q->r = 0;
    q->f = 0;
    q->arr = (int *)malloc(sizeof(int) * q->size);
    return 0;
}