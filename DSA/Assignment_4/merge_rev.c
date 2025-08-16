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
    printf("Enter number of nodes for 1st and 2nd list:");
    scanf("%d %d",&n1,&n2);
    Node *head_1=NULL,*head_2=NULL;
    Node *tail=NULL;
    printf("Enter sorted lists-");
    for(int i=0;i<n1;i++)
    {
        Node *cur=(Node *)malloc(sizeof(Node));
        printf("Enter element for 1st list:");
        scanf("%d",&cur->data);
        cur->next=NULL;

        if(head_1==NULL)
        {
            head_1=cur;
            tail=cur;
        }
        else
        {
            tail->next=cur;
            tail=cur;
        }
    }
    tail=NULL;
    for(int i=0;i<n2;i++)
    {
        Node *cur=(Node *)malloc(sizeof(Node));
        printf("Enter element for 2nd list:");
        scanf("%d",&cur->data);
        cur->next=NULL;

        if(head_2==NULL)
        {
            head_2=cur;
            tail=cur;
        }
        else
        {
            tail->next=cur;
            tail=cur;
        }
    }
    
    for(int i=0;i<n1+n2;i++)
    {
        
    }
    
    return 0;
}