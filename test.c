#include <stdio.h>
#include <stdlib.h>
typedef struct Node
{
    int data;
    struct Node *next;
}Node;
int main()
{
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
    
    return 0;
}