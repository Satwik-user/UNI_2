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

    printf("original Linked List:");
    Node *temp=head;
    while(temp)
    {
        prnitf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\n");

    int del_pos;
    printf("Enter delete position:");
    scanf("%d",&del_pos);
    temp=head;
    while(temp && del_pos>0)
    {
        temp=temp->next;
        del_pos--;
    }
    
    
    return 0;
}