#include <stdio.h>
#include <stdlib.h>
typedef struct Node
{
    int data;
    struct Node next;
}Node;

Node *createNode(int data)
{
    Node *newNode=(Node *)malloc(sizeof(Node));
    newNode->data=data;
    newNode->next=NULL;
}

void insert_ele(Node* *head, int data)
{
    Node *newNode=createNode(data);
    if(*head==NULL)
    {
        *head=newNode;
        newNode->next=*head;
        return;
    }
    Node *temp=*head;
    while(temp->next!=*head)
    temp=temp->next;
    temp->next=newNode;
    newNode->next=*head;
}

void insert_start(Node* *head, int data)
{
    Node *newNode=createNode(data);
    Node *temp=*head;
    while(temp->next!=*head)
    temp=temp->next;
    temp->next=newNode;
    newNode->next=*head;
    *head=newNode;
}

void insert_pos(Node* *head, int data, int pos)
{
    Node *newNode=createNode(data);
    Node *temp=*head;
    for(int i=1;i<pos-1;i++)
    temp=temp->next;
    newNode->next=temp->next;
    temp->next=newNode;
}
