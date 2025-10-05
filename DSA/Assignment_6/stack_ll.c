#include <stdio.h>
#include <stdlib.h>
typedef struct Node
{
    int data;
    struct Node *next;
}node;

node *createNode(int data)
{
    node *newNode=(node *)malloc(sizeof(node));
    newNode->data=data;
    newNode->next=NULL;
    return newNode;
}

void insert_ele(node* *head, int data)
{
    node *newNode=createNode(data);
    if(*head==NULL)
    {
        *head=newNode;
        return;
    }
    newNode->next=*head;
    *head=newNode;
}

void del_head(node* *head)
{
    node *temp=*head;
    *head=(*head)->next;
    free(temp);
}

//Stack implementation
int isEmpty(node* *stack)
{
    return *stack==NULL;
}

void push(node* *stack, int data)
{
    insert_ele(stack, data);
}

int pop(node* *stack)
{
    if(isEmpty(stack))
    {
        printf("Stack underflow!");
        return -1;
    }

}