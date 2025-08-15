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
        printf("Enter data at node %d:",i+1);
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
            
        }
    }
    
    return 0;
}