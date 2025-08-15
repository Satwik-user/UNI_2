#include <stdio.h>
#include <stdlib.h>
typedef struct Node
{
    int height;
    int weight;
    struct Node *next;
}Node;

int main()
{
    int n;
    printf("Enter number of students:");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        Node *cur=(Node *)malloc(sizeof(Node));
        
    }
    
    return 0;
}