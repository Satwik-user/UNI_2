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
int main()
{
    //Formation of the Linked List
    int n, data;
    printf("Enter no of nodes:");
    scanf("%d",&n);
    Node *head=NULL;
    for(int i=0;i<n;i++)
    {
        printf("Enter element:");
        scanf("%d",&data);
        insert_ele(&head,data);
    }
    printf("Original List:");
    print_list(&head);
    
    //Insertion of element at start
    int start;
    printf("Enter element to insert at start:");
    scanf("%d",&start);
    insert_start(&head, start);
    printf("List after insert at start:");
    print_list(&head);

    //insertion of element at end
    int end;
    printf("Enter element to insert at end:");
    scanf("%d",&end);
    insert_ele(&head, end);
    printf("List after insert at end:");
    print_list(&head);

    int ele, pos;
    printf("Enter element and position to insert:");
    scanf("%d %d",&ele, &pos);
    insert_pos(&head, ele, pos);
    printf("List after insert at position:");
    print_list(&head);

    del_start(&head);
    printf("List after delete element at start:");
    print_list(&head);

    del_end(&head);
    printf("List after delete element at end:");
    print_list(&head);

    printf("Enter position to delete:");
    scanf("%d",&pos);
    del_pos(&head, pos);
    printf("List after deletion at position:");
    print_list(&head);
    
    return 0;
}