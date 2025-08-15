#include <stdio.h>
#include <stdlib.h>
typedef struct Node
{
    int data;
    struct Node *next;
}Node;

int main()
{
    char str[100];
    printf("Enter a string:");
    fgets(str,sizeof(str),stdin);
    str[sizeof(str)-1]='\0';

    int n=sizeof(str);
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
            tail=cur;
        }
    }
    
    return 0;
}