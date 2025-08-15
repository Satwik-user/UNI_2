#include <stdio.h>
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
        printf("Enter data of node %d",i+1);
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