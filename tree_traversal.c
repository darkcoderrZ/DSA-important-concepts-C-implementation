#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int data;
    struct node *left;
    struct node *right;
} node;
node* createnode(int val){
    node*n=(node*)malloc(sizeof(node));
    n->left=NULL;
    n->right=NULL;
    n->data=val;
    return n;
}
void preorder(node*n){
    if(n!=NULL){
        printf("%d ",n->data);
        preorder(n->left);
        preorder(n->right);
    }
}
void postorder(node*n){
    if(n!=NULL){
        postorder(n->left);
        postorder(n->right);
        printf("%d ",n->data);
    }
}
void inorder(node*n){
    if(n!=NULL){
        inorder(n->left);
        printf("%d ",n->data);
        inorder(n->right);
    }
}
int main(){
    node*n=createnode(4);
    node*n2=createnode(1);
    node*n3=createnode(6);
    node*n4=createnode(5);
    node*n5=createnode(2);
    n->left=n2;
    n->right=n3;
    n2->left=n4;
    n2->right=n5;
    preorder(n);
    printf("\n");
    postorder(n);
    printf("\n");
    inorder(n);
    return 0;
}