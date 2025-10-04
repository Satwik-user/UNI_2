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
    temp=temp->next;
    temp->next=newNode;
}

void print_list(Node* *head)
{
    Node *temp=*head;
    while(temp)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\n");
}

void rev(Node* *head)
{
    if(*head==NULL) return;
    Node *temp=*head;
    Node *last=NULL;
    while(temp)
    {
        Node *swap=temp->next;
        temp->next=temp->prev;
        temp->prev=swap;

        last=temp;
        temp=temp->prev;
    }
    *head=last;
}

int main()
{
    int n, data;
    
    
    return 0;
}