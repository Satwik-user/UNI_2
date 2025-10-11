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
    stack->arr=(int *)malloc(sizeof(int));
}

int isFull(Stack *stack)
{
    return stack->top==stack->cap-1;
}

int isEmpty(Stack *stack)
{
    return stack->top==-1;
}

void push(Stack *stack, int data)
{
    if(isFull(stack))
    {
        printf("Stack overflow!");
        return;
    }
    stack->arr[++stack->top]=data;
}

int pop(Stack *stack)
{
    if(isEmpty(stack))
    {
        printf("Stack underflow!");
        return 0;
    }
    return stack->arr[stack->top--];
}

int peek(Stack *stack)
{
    if(isEmpty(stack))
    {
        printf("Stack is empty!");
        return 0;
    }
    return stack->arr[stack->top];
}

int decimalToBinary(int num, Stack *stack)
{
    int rev_bi, bi;
    while(num%2==0)
    {
        rev_bi=rev_bi*10+(num%2);
        num/=2;
    }
    while(bi>0)
    {
        bi=bi*10+(bi%10);
        bi/=10;
    }
    return bi;
}