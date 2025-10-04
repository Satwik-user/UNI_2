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

void div(Node* *head, int len, Node* *head_1, Node* *head_2)
{
    int br;
    if(len%2==0)
    br=len/2;
    else
    br=(len/2)+1;

    Node *temp=*head;

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

void join(Node* *head_1, Node* *head_2)
{
    Node *temp=*head_1;
    while(temp->next!=NULL)
    temp=temp->next;
    temp->next=*head_2;
}

int main()
{
    int n, data;
    printf("Enter number of nodes:");
    scanf("%d",&n);
    Node *head=NULL;
    for(int i=0;i<n;i++)
    {
        printf("ENter element:");
        scanf("%d",&data);
        insert_ele(&head, data);
    }
    printf("Original List:");
    print_list(&head);
    
    Node *head_1=NULL, *head_2=NULL;
    div(&head, n, &head_1, &head_2);
    rev(&head_1);
    rev(&head_2);
    join(&head_1, &head_2);
    
    printf("List after operations:");
    print_list(&head_1);
    
    return 0;
}