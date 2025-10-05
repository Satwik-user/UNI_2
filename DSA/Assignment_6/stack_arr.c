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
    stack->arr[stack->top++]=ele;
}

void pop(Stack *stack)
{
    if(isEmpty(stack))
    {
        printf("Underflow!");
        return;
    }
    
}