#include <stdio.h>
#include <stdlib.h>
typedef struct Node
{
    int data;
    struct Node *next;
}node;

node *createNode(int data)
{
    node *newNode=(node *)malloc(sizeof(node));
    newNode->data=data;
    newNode->next=NULL;
    return newNode;
}

void insert_ele(node* *head, int data)
{
    node *newNode=createNode(data);
    if(*head==NULL)
    {
        *head=newNode;
        return;
    }
    newNode->next=*head;
    *head=newNode;
}

void del_head(node* *head)
{
    node *temp=*head;
    *head=(*head)->next;
    free(temp);
}

//Stack implementation
int isEmpty(node* *stack)
{
    return *stack==NULL;
}

int isFull(node* *stack, int max_size)


void push(node* *stack, int data)
{
    insert_ele(stack, data);
}

int pop(node* *stack)
{
    if(isEmpty(stack))
    {
        printf("Stack underflow!");
        return -1;
    }
    del_head(stack);
}

int peek(node* *stack)
{
    if(isEmpty(stack))
    {
        printf("Stack underflow!");
        return -1;
    }
    return (*stack)->data;
}

void print_stack(node* *stack)
{
    if(isEmpty(stack))
    {
        printf("Stack underflow!");
        return;
    }
    node *temp=*stack;
    while(temp)
    {
        printf("%d\n",temp->data);
        temp=temp->next;
    }
}

int main()
{
    node *stack=NULL;
    int n, ele;
    printf("Enter size of stack:");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("Enter element:");
        scanf("%d",&ele);
        push(&stack, ele);
    }
    printf("Original Stack:\n");
    print_stack(&stack);

    //pop top element of stack
    printf("Popped top element:%d\n",pop(&stack));

    //peek top element of stack
    printf("Top element of stack:%d\n",peek(&stack));

    //print whole stack
    printf("Modified Stack:\n");
    print_stack(&stack);
    
    return 0;
}