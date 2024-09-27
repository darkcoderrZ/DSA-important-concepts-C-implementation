#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int data;
    struct node *next;

} node;
void display(node *head)
{
    node*ptr=head;
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}
//***************************************insertion**************************************//
void insert(node *n, node *head)
{
    n->next = head;
}
node *insertatindex(node *head, int data, int index)
{
    node *ptr = (node *)malloc(sizeof(node *));
    ptr->data = data;
    node *p = head;
    int i = 0;
    while (i != index - 1)
    {
        p = p->next;
        i++;
    }
    ptr->next = p->next;
    p->next = ptr;
    return head;
}
//*************************************deletion****************************************//
node *deleteatfirst(node *head)
{
    node *ptr = head;
    head = head->next;
    free(ptr);
    return (head);
}
node *deleteatindex(node *head, int index)
{
    int i = 0;
    node *ptr = head;
    node *p;
    while (i != index)
    {
        p = ptr;
        ptr = ptr->next;
        i++;
    }
    p->next = ptr->next;
    free(ptr);
    return (head);
}
node *deletelast(node *head)
{
    node *ptr = head;
    node *p;
    while ((ptr->next) != NULL)
    {
        p = ptr;
        ptr = ptr->next;
    }
    free(ptr);
    p->next = NULL;
    return head;
}
node *deletevalue(int value, node *head)
{
    node *ptr = head;
    node *p;
    while ((ptr->data) != value && (ptr->next) != NULL)
    {
        p = ptr;
        ptr = ptr->next;
    }
    if (ptr->data == value)
    {
        p->next = ptr->next;
            free(ptr);
    }
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
    head->data=20;
    head->next=n2;
    n2->data = 30;
    n2->next = n3;
    n3->data = 40;
    n3->next = n4;
    n4->data = 50;
    n4->next = n5;
    n5->data = 60;
    n5->next = n6;
    n6->data = 70;
    n6->next = NULL;
    printf("%d\n",head->data);
    head=deleteatfirst(head);
    display(head);
  printf("%d",head->data);
}