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
    if (q->r == q->size - 1)
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
        q->r++;
        q->arr[q->r] = data;
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
        q->f++;
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
    q->r = -1;
    q->f = -1;
    q->arr = (int *)malloc(sizeof(int) * q->size);
    return 0;
}