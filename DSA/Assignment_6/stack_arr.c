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
    Stack *newStack=(Stack *)malloc(sizeof(Stack));
    newStack->cap=cap;
    newStack->top=-1;
    newStack->arr=(int *)malloc(cap*sizeof(int));
}