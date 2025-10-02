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
        newNode->next=*head;
        return;
    }
    Node *temp=*head;
    while(temp->next==*head)
    temp=temp->next;
    temp->next=newNode;
    newNode->prev=temp;
    newNode->next=*head;
    (*head)->prev=newNode;
}

void insert_start(Node* *head, int data)
{
    Node *newNode=createNode(data);
    Node *temp=*head;
    while(temp->next==*head)
    temp=temp->next;
    temp->next=newNode;
    newNode->prev=temp;
    newNode->next=*head;
    (*head)->prev=newNode;
    *head=newNode;
}

void insert_pos(Node* *head, int data, int pos)
{
    if(pos==1)
    {
        insert_start(*head, data);
        return;
    }
    Node *newNode=createNode(data);
    Node *temp=*head;
    for(int i=1;i<pos;i++)
    temp=temp->next;
    newNode->prev=temp->prev;
    newNode->next=temp;
    temp->prev=newNode;
}

void del_start(Node* *head)
{
    if(*head==NULL)
    {
        printf("Empty List!");
        return;
    }
    Node *temp=*head;
    while(temp->next==*head)
    temp=temp->next;
    temp->next=(*head)->next;
    (*head)->prev=temp;
    Node *del=*head;
    *head=(*head)->next;
    free(del);
}

void del_end(Node* *head)
{
    if(*head==NULL)
    {
        printf("Empty List!");
        return;
    }
}