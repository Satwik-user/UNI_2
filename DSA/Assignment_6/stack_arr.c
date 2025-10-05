#include <stdio.h>
#include <stdlib.h>
typedef struct Stack
{
    int top;
    int cap;
    int *arr;
}Stack;

Stack *createStack(int cap)
{
    Stack *stack=(Stack *)malloc(sizeof(Stack));
    stack->cap=cap;
    stack->top=-1;
    stack->arr=(int *)malloc(cap*sizeof(int));
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

void push(Stack *stack, int ele)
{
    if(isFull(stack))
    {
        printf("Overflow!\n");
        return;
    }
    stack->arr[++stack->top]=ele;
}

int pop(Stack *stack)
{
    if(isEmpty(stack))
    {
        printf("Underflow!\n");
        return -1;
    }
    return stack->arr[stack->top --];
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
        printf("Stack is empty!\n");
        return;
    }
    for(int i=stack->top;i>=0;i--)
    printf("%d\n",stack->arr[i]);
}

int main()
{
    int n, ele;
    printf("Enter size of stack:");
    scanf("%d",&n);
    Stack *stack=createStack(n);
    for(int i=0;i<n;i++)
    {
        printf("Enter elements of stack:");
        scanf("%d",&ele);
        push(stack, ele);
    }
    printf("Original Stack:");
    print_stack(stack);

    //pop top element of stack
    
    return 0;
}