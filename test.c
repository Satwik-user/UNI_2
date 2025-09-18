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
    printf("Stack elements:");
    for(int i=stack->top; i>=0;i--)
    {
        printf("%d ",stack->arr[i]);
    }
    printf("\n");
}
int sixe(Stack *stack)
{
    return stack->top+1;
}
void free_stack(Stack *stack)
{
    free(stack->arr);
    free(stack);
}
int main()
{
    int capacity, choice, element;

    printf("Enter stack capacity: ");
    scanf("%d",&capacity);
    Stack *stack=create_stack(capacity);

    while(1)
    {
        printf("\n--- Stack Operations ---\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Peek/Top\n");
        printf("4. Check if Empty\n");
        printf("5. Check if Empty\n");
        printf("6. Check if Full\n");
        printf("7. Size\n");
        printf("8. Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                printf("Enter element to push: ");
                scanf("%d",&element);
                push(stack, element);
                break;
            case 2:
                element=pop(stack);
                if(element!=-1)
                printf("Top element:%d\n",element);
                break;
        }
    }
    
    return 0;
}