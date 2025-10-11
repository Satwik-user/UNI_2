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
    
}