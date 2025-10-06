#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

int isEmpty(Stack *stack)
{
    return stack->top==-1;
}

int isFull(Stack *stack)
{
    return stack->top==stack->cap-1;
}

void push(Stack *stack, int ele)
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

void evaluatePostfix(char **exp, int len)
{
    Stack *stack=createStack(len);
    for(int i=0;i<len;i++)
    {
        
    }
}