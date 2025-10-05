#include <stdio.h>
#include <stdlib.h>
typedef struct Stack
{
    int top;
    int cap;
    char *arr;
}Stack;

Stack *createStack(int cap)
{
    Stack *stack=(Stack *)malloc(sizeof(Stack));
    stack->cap=cap;
    stack->top=-1;
    stack->arr=(char *)malloc(cap*sizeof(char));
    return stack;
}

int isFull(Stack *stack)
{
    return stack->top==stack->cap-1;
}

int isEmpty(Stack *stack)
{
    return stack->top==-1;
}

void push(Stack *stack, char ele)
{
    if(isFull(stack))
    {
        printf("Stack overflow!\n");
        return;
    }
    stack->arr[++stack->top]=ele;
}

int pop(Stack *stack)
{
    if(isEmpty(stack))
    {
        printf("Stack underflow!\n");
        return -1;
    }
    return stack->arr[stack->top--];
}

int peek(Stack *stack)
{
    if(isEmpty(stack))
    {
        printf("Stack is empty!\n");
        return -1;
    }
    return stack->arr[stack->top];
}

void print_stack(Stack *stack)
{
    if(isEmpty(stack))
    {
        printf("Stack is empty!");
        return;
    }
    for(int i=stack->top;i>=0;i--)
    printf("%d\n",stack->arr[i]);
}

int noOfOpen(Stack *stack)
{
    int c=0;
    if(isEmpty(stack))
    {
        printf("Stack is empty!");
        return;
    }
    for(int i=stack->top;i>=0;i--)
    {
        if(stack->arr[i]=='(')
        c++;
    }
    return c;
}

int noOfClose(Stack *stack)
{
    int c=0;
    if(isEmpty(stack))
    {
        printf("Stack is empty!");
        return;
    }
    for(int i=stack->top;i>=0;i--)
    {
        if(stack->arr[i]==')')
        c++;
    }
    return c;
}

int main()
{
    int n;
    printf("Enter size of stack:");
    scanf("%d",&n);
    
    
    return 0;
}