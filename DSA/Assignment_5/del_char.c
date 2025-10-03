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

void del(Node* *head, int ele)
{
    Node *temp=*head;
    while(temp)
    {
        if(temp->data==ele)
        break;
        temp=temp->next;
    }
    if(temp->next==NULL)
    {
        printf("Element not in list!");
        return;
    }
    else
    {
        temp->prev->next=temp->next;
        temp->next->prev=temp->prev;
    }
}

int mian()
{

    
    return 0;
}