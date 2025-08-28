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
        Node *current=(Node *)malloc(sizeof(Node));
        printf("Enter data of node %d:",i+1);
        scanf("%d",&current->data);
        current->next=NULL;

        if(head==NULL)
        {
            head=current;
            tail=current;
        }
        else
        {
            tail->next=current;
            tail=current;
        }
    }

    printf("Linked List elements:");
    Node *temp=head;
    while(temp)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\n");

    //Insertion
    int new_data,pos;
    printf("Enter element to insert and position:");
    scanf("%d %d",&new_data,&pos);
    Node *new_node=(Node *)malloc(sizeof(Node));
    new_node->data=new_data;
    new_node->next=NULL;
    temp=head;
    if(pos==1)
    {
        new_node->next=head;
        head=new_node;
    }
    else
    {
        for(int i=1;i<pos-1 && temp!=NULL;i++)
        {
            if(temp==NULL)
            {
                printf("Out of bobunds!");
                free(temp);
            }
            else
            {
                
            }
        }
    }

    //Free memory
    temp=head;
    while(temp)
    {
        Node *next_node=temp->next;
        free(temp);
        temp=next_node;
    }
    
    return 0;
}