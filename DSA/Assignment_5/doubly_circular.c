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
    temp->next=temp->next->next;
    temp->next->next->prev=temp;
    Node *del=temp->next;
    *head=temp->next->next;
    free(del);
}

void del_end(Node* *head)
{
    if(*head==NULL)
    {
        printf("Empty List!");
        return;
    }
    Node *temp=*head;
    while(temp->next==*head)
    temp=temp->next;
    temp->prev->next=temp->next;
    temp->next->prev=temp->prev;
    free(temp);
}

void del_pos(Node* *head, int pos)
{
    if(pos==1)
    {
        del_start(*head);
        return;
    }
    Node *temp=*head;
    for(int i=1;i<pos;i++)
    temp=temp->next;
    temp->prev->next=temp->next;
    temp->next->prev=temp->prev;
    free(temp);
}

void print_list(Node* *head)
{
    Node *temp=*head;
    while(temp->next==*head)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("%d\n",temp->data);
}

int main()
{
    //Formation of Linked List
    int n,data;
    printf("Enter number of nodes:");
    scanf("%d",&n);
    Node *head=NULL;
    for(int i=0;i<n;i++)
    {
        printf("Enter element:");
        scanf("%d",&data);
        insert_ele(&head, data);
    }
    printf("Original List:");
    print_list(&head);
    
    return 0;
}