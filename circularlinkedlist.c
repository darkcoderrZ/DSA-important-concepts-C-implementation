#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int data;
    struct node *next;

} node;
void display(node *head)
{
    node *ptr = head;
    do
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    } while (ptr != head);
    printf("\n");
}
node *insert(node *head, int data)
{
    node *p = head;
    while (p->next != head)
    {
        p = p->next;
    }
    node *ptr = (node *)malloc(sizeof(node));
    ptr->data = data;
    ptr->next = head;
    p->next = ptr;
    head = ptr;
    return head;
}
int main()
{
    node *head, *n2, *n3, *n4, *n5, *n6;
    head = (node *)malloc(sizeof(node));
    n2 = (node *)malloc(sizeof(node));
    n3 = (node *)malloc(sizeof(node));
    n4 = (node *)malloc(sizeof(node));
    n5 = (node *)malloc(sizeof(node));
    n6 = (node *)malloc(sizeof(node));
    head->data = 20;
    head->next = n2;
    n2->data = 30;
    n2->next = n3;
    n3->data = 40;
    n3->next = n4;
    n4->data = 50;
    n4->next = n5;
    n5->data = 60;
    n5->next = n6;
    n6->data = 70;
    n6->next = head;
    display(insert(head, 10));
}