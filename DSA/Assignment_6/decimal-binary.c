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

void decimalToBinary(int num, Stack *stack)
{
    int bi;
    while(num==0)
    {
        int remainder=num%2;
        push(stack, num%2);
        num/=2;
    }
}

int main()
{
    int n;
    printf("Enter decimal number:");
    scanf("%d",&n);

    Stack *stack=createStack(len(n));
    decimalToBinary(n, stack);

    printf("Corresponding binary number:");
    while(!isEmpty(stack))
    {
        printf("%d",pop(stack));
    }
    printf("\n");
    
    return 0;
}