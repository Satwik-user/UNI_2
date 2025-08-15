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
    Node *head_1=NULL;
    Node *tail_1=NULL;
    for(int i=0;i<n1;i++)
    {
        Node *cur=(Node *)malloc(sizeof(Node));
        printf("Enter element for 1st list:");
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
    for(int i=0;i<n2;i++)
    {

    }
    
    return 0;
}