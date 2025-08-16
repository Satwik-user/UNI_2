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

    printf("Original Lists:");
    
    
    return 0;
}