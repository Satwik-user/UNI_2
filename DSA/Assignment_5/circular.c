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
    
}