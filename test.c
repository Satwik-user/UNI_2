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
    printf("Enter no. of nodes:");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        Node *current=(Node *)malloc(sizeof(Node));
        printf("Enter data of %d node:",i+1);
        scanf("%d",&current->data);
    }



    Node *head=(Node *)malloc(sizeof(Node));
    head->data=10;
    Node *first=(Node *)malloc(sizeof(Node));
    first->data=20;
    Node *second=(Node *)malloc(sizeof(Node));
    second->data=30;

    head->next=first;
    first->next=second;
    second->next=NULL;

    Node *temp=head;
    while(temp)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\n");
    
    return 0;
}