#include <stdio.h>
#include <stdlib.h>
typedef struct Node
{
    int data;
    struct Node *next;
}Node;

int main()
{
    int n;
    printf("Enter number of nodes:");
    scanf("%d",&n);
    Node *head=NULL;
    Node *tail=NULL;
    for(int i=0;i<n;i++)
    {
        Node *cur=(Node *)malloc(sizeof(Node));
        printf("Enter element:");
        scanf("%d",&cur->data);
        cur->next=NULL;

        if(head==NULL)
        {
            head=cur;
            tail=cur;
        }
        else
        {
            tail->next=cur;
            tail=cur;
        }
    }

    printf("Original Linked List:");
    Node *temp=head;
    while(temp)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\n");

    int pos,ele,p=0;
    printf("Enter position and element to insert:");
    scanf("%d %d",&pos,&ele);
    Node *new_node=(Node *)malloc(sizeof(Node));
    new_node->data=ele;
    new_node->next=NULL;
    temp=head;
    while(temp && p!=pos)
    {
        temp=temp->next;
        p++;
    }
    new_node->next=temp->next;
    temp->next=new_node;

    printf("Modified Linked List:");
    temp=head;
    while(temp)
    {
        printf("%d ",&temp->data);
        temp=temp->next;
    }
    printf("\n");

    //Free memory
    temp=head;
    while(temp)
    {
        Node *next_node=temp->next;
        free(temp);
        
    }
    
    return 0;
}