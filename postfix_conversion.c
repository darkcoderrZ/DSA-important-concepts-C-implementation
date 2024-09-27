#include <stdio.h>
#include <stdlib.h>
typedef struct operand{
    int pre;
    char ope;
}operand;
typedef struct stack{
    int size;
    int top;
    operand*arr;
}stack;
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
char* postfix(char*exp,stack*s){
s->arr=(operand*)malloc(sizeof(operand)*10);
for(int i=0;i!='\0';i++){
    if(exp[i]=='+'||exp[i]=='-'||exp[i]=='*'||exp[i]=='/'){
        int z;
        if(exp[i]=='*'||exp[i]=='/'){
        z=2;
        }
        else if(exp[i]=='+'||exp[i]=='-'){
        z=1;
        }
        if(isempty(s->arr)||s->arr[s->top]->pre<z){
            push(s,)
        }
    }
}
}
int main(){
    char exp[10]="a*b+g/h-k";
    stack*s=(stack*)malloc(sizeof(stack));
    s->size=10;
    s->top=-1;
    return 0;
}