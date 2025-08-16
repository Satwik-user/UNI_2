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
    Node *head=NULL,*head_1=NULL;
    Node *tail=NULL,*tail_1=NULL;
    printf("Enter sorted lists-");
    for(int i=0;i<n1;i++)
    {
        Node *cur=(Node *)malloc(sizeof(Node));
        printf("Enter element for 1st list:");
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
        printf("Enter element for 2nd list:");
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
    
    tail->next=head_1;//Connecting tail node of 1st list with head node of 2nd

    printf("Merged List:");
    Node *temp=head;
    while(temp)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\n");

    
    
    return 0;
}