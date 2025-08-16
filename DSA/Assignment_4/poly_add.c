#include <stdio.h>
#include <stdlib.h>
typedef struct Node
{
    int data;
    struct Node *next;
}Node;
int main()
{
    int n1,n2;
    printf("Enter number of nodes for 1st and 2nd polynomial:");
    scanf("%d %d",&n1,&n2);
    Node *head=NULL,*head_1=NULL;
    Node *tail=NULL,*tail_1=NULL;
    for(int i=0;i<n1;i++)
    {
        Node *cur=(Node *)malloc(sizeof(Node));
        printf("Enter element of 1st polynomial:");
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
    for(int i=0;i<n2;i++)
    {
        Node *cur=(Node *)malloc(sizeof(Node));
        printf("Enter element:");
        scanf("%d",&cur->data);
        cur->next=NULL;
        if(head_1==NULL)
        {
            head_1=cur;
            tail_1=cur;
        }
        else
        {
            tail_1->next=cur;
            tail_1=cur;
        }
    }

    printf("Original Lists:");
    Node *temp=head;
    while(temp)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\n");
    
    temp=head_1;
    while(temp)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\n");

    
    
    return 0;
}