#include <stdio.h>
#include <stdlib.h>
typedef struct Node
{
    int data;
    struct Node *next;
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
    temp->next=newNode;
    newNode->next=*head;
}

void insert_start(Node* *head, int data)
{
    Node *newNode=createNode(data);
    Node *temp=*head;
    while(temp->next!=*head)
    temp=temp->next;
    temp->next=newNode;
    newNode->next=*head;
    *head=newNode;
}

void insert_pos(Node* *head, int data, int pos)
{
    Node *newNode=createNode(data);
    Node *temp=*head;
    for(int i=1;i<pos-1;i++)
    temp=temp->next;
    newNode->next=temp->next;
    temp->next=newNode;
}

void del_start(Node* *head)
{
    if(*head==NULL)
    {
        printf("Empty List!");
        return;
    }
    Node *temp=*head;
    while(temp->next!=*head)
    temp=temp->next;
    temp->next=(*head)->next;
    Node *del=*head;
    *head=(*head)->next;
    free(del);
}

void del_end(Node* *head)
{
    if(*head==NULL)
    {
        printf("Empty list!");
        return;
    }
    Node *temp=*head;
    Node *prev=NULL;
    while(temp->next!=*head)
    {
        prev=temp;
        temp=temp->next;
    }
    free(temp);
    prev->next=*head;
}

void del_pos(Node* *head, int pos)
{
    if(pos==1)
    {
        del_start(head);
        return;
    }
    Node *temp=*head;
    Node *prev=NULL;
    for(int i=1;i<pos;i++)
    {
        prev=temp;
        temp=temp->next;
    }
    Node *next=temp->next;
    free(temp);
    prev->next=next;
}

void print_list(Node* *head)
{
    Node *temp=*head;
    while(temp->next==*head)
    {
        printf("%d ",temp->data);
        temp=temp->data;
    }
    printf("%d \n",temp->data);
}
int main()
{
    //Formation of Linked List
    int n, data;
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

    //Insertion of element at start
    int start;
    printf("Enter element to insesrt at start:");
    scanf("%d",&start);
    insert_start(&head, start);
    printf("List after insertion at start:");
    print_list(&head);

    //Insertion of element at end
    int end;
    printf("Enter elemnent to insert a t end:");
    scanf("%d",&end);
    insert_ele(&head, end);
    printf("List after insertion at end:");
    print_list(&head);

    //Insertion of element at specific position
    int ele, pos;
    printf("Enter element and position to insert:");
    scanf("%d %d",&ele, &pos);
    insert_pos(&head, ele, pos);
    printf("List after insertion at position:");
    print_list(&head);

    //Deletion of element at start
    del_start(&head);
    printf("List after deletion at start:");
    print_list(&head);

    //Deletion of element at end
    del_end(&head);
    printf("List after deletion at end");
    print_list(&head);

    //Deletion of eleemnt at specific position
    printf("Enter position to delete:");
    scanf("%d",&pos);
    del_pos(&head, pos);
    
    
    return 0;
}
