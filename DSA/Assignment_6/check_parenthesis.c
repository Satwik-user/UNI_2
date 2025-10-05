#include <stdio.h>
#include <stdlib.h>
typedef struct Stack
{
    int top;
    int cap;
    int *arr;
}stack;

stack *createStack(int cap)
{
    stack *newStack=(stack *)malloc(sizeof(stack));
    newStack->cap=cap;
    newStack->top=-1;
    newStack->arr=(int *)malloc(cap*sizeof(int));
}