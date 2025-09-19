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

void del_start(Node* *head)
{
    if(*head==NULL)
    {
        printf("Empty List!");
        return;
    }
    Node *temp=*head;
    while(temp->next!=*head)
    temp=temp->next;
    temp->next=(*head)->next;
    Node *del=*head;
    *head=(*head)->next;
    free(del);
}

void del_end(Node* *head)
{
    if(*head==NULL)
    {
        printf("Empty list!");
        return;
    }
    Node *temp=*head;
    Node *prev=NULL;
    while(temp->next!=*head)
    {
        prev=temp;
        temp=temp->next;
    }
    
}
