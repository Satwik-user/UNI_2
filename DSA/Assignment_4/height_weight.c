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
    Node *head=NULL;
    Node *tail=NULL;
    for(int i=0;i<n;i++)
    {
        Node *cur=(Node *)malloc(sizeof(Node));
        printf("Enter height and weight of student%d:",i+1);
        scanf("%d %d",&cur->height,&cur->weight);
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

    Node *temp=head;
    int max=0;
    while(temp)
    {
        int ratio=temp->weight/temp->height;
        if(ratio>max)
        max=ratio;
        temp=temp->next;
    }

    printf("Highest weight/height ratio:",max);

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