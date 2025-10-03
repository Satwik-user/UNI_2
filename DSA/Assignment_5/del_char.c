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
    if(temp==NULL)
    {
        printf("Element not in list!");
        return;
    }
    else if(temp->next==NULL)
    {
        temp->prev->next=NULL;
        free(temp);
    }
    else
    {
        temp->prev->next=temp->next;
        temp->next->prev=temp->prev;
        free(temp);
    }
}

void print_list(Node* *head)
{
    
}

int main()
{
    int n, data, ele;
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

    printf("Enter element to delete:");
    scanf("%d",&ele);
    del(&head, ele);
    printf("List after character deletion:");
    print_list(&head);
    
    return 0;
}