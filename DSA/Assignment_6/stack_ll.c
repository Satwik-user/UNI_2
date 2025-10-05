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
    
}