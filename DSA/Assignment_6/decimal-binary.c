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
    while(num>0)
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
    char str[20];
    sprintf(str, "%d", n);
    int len=strlen(str);
    int stackSize=(n==0)?1:len*4;

    Stack *stack=createStack(stackSize);
    decimalToBinary(n, stack);

    printf("Corresponding binary number:");
    while(!isEmpty(stack))
    {
        printf("%d",pop(stack));
    }
    printf("\n");
    
    return 0;
}