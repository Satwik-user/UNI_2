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
    printf("Enter nymber of nodes:");
    scanf("%d",&n);
    Node *head=NULL,*head_1=NULL;
    Node *tail=NULL,*tail_1=NULL;
    for(int i=0;i<n;i++)
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

    
    
    return 0;
}