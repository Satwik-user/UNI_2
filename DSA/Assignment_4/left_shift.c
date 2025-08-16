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

    printf("Original List:");
    Node *temp=head;
    while(temp)
    {
        printf("%d ",&temp->data);
        temp=temp->next;
    }
    printf("\n");

    int k;
    printf("Enter number of nodes:");
    scanf("%d",&k);
    if(k<0 && k>n)
    printf("No of nodes should be less than size of list!");
    else
    {
        for(int i=0;i<n;i++)
        {
            
        }
    }
    
    return 0;
}