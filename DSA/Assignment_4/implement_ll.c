#include <stdio.h>
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
        Node *current=(Node *)malloc(sizeof(current));
        
    }
    
    return 0;
}