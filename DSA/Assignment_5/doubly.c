#include <stdio.h>
#include <stdlib.h>
typedef struct Node
{
    int data;
    struct Node *prev;
    struct Node *next;
}Node;
Node* createNode(int data)
{
    Node *newNode=(Node *)malloc(sizeof(Node));
    newNode->data=data;
    newNode->prev=NULL;
    newNode->next=NULL;
    return newNode;
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
    {
        temp=temp->next;
    }
    temp->next=newNode;
    newNode->prev=temp;
}
void insert_start(Node* *head, int data)
{
    Node *newNode=createNode(data);
    if(*head==NULL)
    {
        *head=newNode;
        return;
    }
    newNode->next=*head;
    (*head)->prev=newNode;
    *head=newNode;
}
void insert_pos(Node **head, int data, int pos)
{
    if(pos==1)
    {
        insert_start(head, data);
        return;
    }
    Node *newNode=createNode(data);
    Node *temp=*head;
    for(int i=1;temp && i<pos-1;i++)
    {
        temp=temp->next;
    }
    newNode->next=temp->next;
    newNode->prev=temp;
    if(temp->next!=NULL)
    temp->next->prev=newNode;
    temp->next=newNode;
}
void del_start(Node **head)
{
    if(*head==NULL)
    {
        printf("Empty List!");
        return;
    }
    Node *temp=*head;
    *head=(*head)->next;
    if(*head!=NULL)
    (*head)->prev=NULL;
    free(temp);
}
void del_end(Node **head)
{
    if(*head==NULL)
    {
        printf("Empty List!");
        return;
    }
    Node *temp=*head;
    while(temp->next)
    temp=temp->next;
    temp->prev->next=NULL;
    free(temp);
}
void del_pos(Node **head, int pos)
{
    if(pos==1)
    {
        del_start(head);
        return;
    }
    Node *temp=*head;
    for(int i=1;i<pos;i++)
    {
        if(temp==NULL)
        {
            printf("Invalid Position!");
            return;
        }
        temp=temp->next;
    }
    temp->prev->next=temp->next;
    if(temp->next!=NULL)
    temp->next->prev=temp->prev;
    free(temp);
}