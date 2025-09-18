#include <stdio.h>
#include <stdlib.h>
typedef struct Stack
{
    int *arr;
    int top;
    int cap;
}Stack;
Stack *create_stack(int cap)
{
    Stack *stack=(Stack *)malloc(sizeof(Stack));
    stack->cap=cap;
    stack->top=-1;
    stack->arr=(int *)malloc(cap * sizeof(int));
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
void push(Stack *stack, int item)
{
    if(isFull(stack))
    {
        printf("Stack overflow\n");
        return;
    }
    stack->arr[++stack->top]=item;
}
int pop(Stack *stack)
{
    if(isEmpty(stack))
    {
        printf("Stack underflow\n");
        return -1;
    }
    return stack->arr[stack->top--];
}
int peek(Stack *stack)
{
    if(isEmpty(stack))
    {
        printf("Stack is empty\n");
        return -1;
    }
    return stack->arr[stack->top];
}
void display(Stack *stack)
{
    if(isEmpty(stack))
    {
        printf("Stack is empty\n");
        return -1;
    }
    return stack->arr[stack->top];
}
void display(Stack *stack)
{
    if(isEmpty(stack))
    {
        printf("Stack is empty\n");
        return;
    }
}