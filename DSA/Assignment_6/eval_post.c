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
    Stack *newStack=(Stack *)malloc(sizeof(Stack));
    
}