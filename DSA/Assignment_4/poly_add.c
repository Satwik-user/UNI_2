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
    Node *head=NULL;
    Node *tail=NULL;
    
    
    return 0;
}