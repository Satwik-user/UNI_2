#include <stdio.h>
#include <stdlib.h>
typedef struct Node
{
    int data;
    struct Node *prev;
    struct Node *next;
}Node;

Node *createNode(int data)
{
    Node *newNode=(Node *)malloc(sizeof(Node));
    newNode->data=data;
    newNode->prev=NULL;
    newNode->next=NULL;
}

void insert_ele(Node* *head, int data)
{
    Node *newNode=createNode(data);
    if(*head==NULL)
    {
        *head=newNode;
        return;
    }
    Node *temp=*head;
    while(temp->next!=NULL)
    temp=temp->next;
    temp->next=newNode;
    newNode->prev=temp;
}

void print_ele(Node* *head)
{
    Node *temp=*head;
    while(temp)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\n");
}

void div(Node* *head)
{
    
}