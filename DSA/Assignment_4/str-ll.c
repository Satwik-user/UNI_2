#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct Node
{
    char data;
    struct Node *next;
}Node;

int main()
{
    char str[100];
    printf("Enter a string:");
    fgets(str,strlen(str),stdin);
    str[sizeof(str)-1]='\0';

    int n=sizeof(str);
    Node *head=NULL;
    Node *tail=NULL;
    for(int i=0;i<n-1;i++)
    {
        Node *cur=(Node *)malloc(sizeof(Node));
        cur->data=str[i];
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

    printf("String converted to linked list:");
    Node *temp=head;
    while(temp)
    {
        printf("%c ",temp->data);
        temp=temp->next;
    }
    printf("\n");

    //Free memory
    temp=head;
    while(temp)
    {
        Node *next_node=temp->next;
        free(temp);
        temp=next_node;
    }
    
    return 0;
}