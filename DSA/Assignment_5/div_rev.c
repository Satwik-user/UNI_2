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

void div(Node* *head, int len)
{
    int br;
    if(len%2==0)
    br=len/2;
    else
    br=(len/2)+1;

    Node *temp=*head;
    Node *head_1=NULL;
    Node *head_2=NULL;
    for(int i=1;i<=br;i++)
    {
        insert_ele(&head_1, temp->data);
        temp=temp->next;
    }
    for(int i=br+1;i<=len;i++)
    {
        insert_ele(&head_2, temp->data);
        temp=temp->next;
    }
    return head_1, head_2;
}