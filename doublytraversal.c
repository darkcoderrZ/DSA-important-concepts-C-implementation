#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
    struct node *prev;
} node;
void display(node *head)
{
    node *ptr = head;
    while (ptr->next != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
    printf("%d", ptr->data);
    printf("\n");
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->prev;
    }
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
    head->prev = NULL;

    n2->data = 30;
    n2->next = n3;
    n2->prev = head;

    n3->data = 40;
    n3->next = n4;
    n3->prev = n2;

    n4->data = 50;
    n4->next = n5;
    n4->prev = n3;

    n5->data = 60;
    n5->next = n6;
    n5->prev = n4;

    n6->data = 70;
    n6->next = NULL;
    n6->prev = n5;

    display(head);
}