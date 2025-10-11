#include <stdio.h>
#include <stdlib.h>

typedef struct Stack
{
    int top;
    int cap;
    int *arr;
}Stack;

Stack *createStack(int data)
{
    Stack *stack=(Stack *)malloc(sizeof(Stack));
    
}