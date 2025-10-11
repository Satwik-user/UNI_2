#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

typedef struct TwoStacks {
    int arr[MAX_SIZE];
    int top1;  // Top of first stack
    int top2;  // Top of second stack
    int size;  // Total array size
} TwoStacks;

// Initialize two stacks
TwoStacks* createTwoStacks(int size) {
    TwoStacks* ts = (TwoStacks*)malloc(sizeof(TwoStacks));
    ts->size = size;
    ts->top1 = -1;           // First stack grows from left
    ts->top2 = size;         // Second stack grows from right
    return ts;
}

// Check if stack1 is empty
int isEmpty1(TwoStacks* ts) {
    return ts->top1 == -1;
}

// Check if stack2 is empty
int isEmpty2(TwoStacks* ts) {
    return ts->top2 == ts->size;
}

// Check if stacks are full
int isFull(TwoStacks* ts) {
    return ts->top1 + 1 == ts->top2;
}

// Push to stack 1
void push1(TwoStacks* ts, int data) {
    if (isFull(ts)) {
        printf("Stack Overflow! Cannot push %d to Stack 1\n", data);
        return;
    }
    ts->arr[++ts->top1] = data;
    printf("Pushed %d to Stack 1\n", data);
}

// Push to stack 2
void push2(TwoStacks* ts, int data) {
    if (isFull(ts)) {
        printf("Stack Overflow! Cannot push %d to Stack 2\n", data);
        return;
    }
    ts->arr[--ts->top2] = data;
    printf("Pushed %d to Stack 2\n", data);
}

// Pop from stack 1
int pop1(TwoStacks* ts) {
    if (isEmpty1(ts)) {
        printf("Stack 1 Underflow!\n");
        return -1;
    }
    return ts->arr[ts->top1--];
}

// Pop from stack 2
int pop2(TwoStacks* ts) {
    if (isEmpty2(ts)) {
        printf("Stack 2 Underflow!\n");
        return -1;
    }
    return ts->arr[ts->top2++];
}

// Display stack 1
void display1(TwoStacks* ts) {
    if (isEmpty1(ts)) {
        printf("Stack 1 is empty\n");
        return;
    }
    printf("Stack 1 (bottom to top): ");
    for (int i = 0; i <= ts->top1; i++) {
        printf("%d ", ts->arr[i]);
    }
    printf("\n");
}

// Display stack 2
void display2(TwoStacks* ts) {
    if (isEmpty2(ts)) {
        printf("Stack 2 is empty\n");
        return;
    }
    printf("Stack 2 (bottom to top): ");
    for (int i = ts->size - 1; i >= ts->top2; i--) {
        printf("%d ", ts->arr[i]);
    }
    printf("\n");
}

// Visualize both stacks
void visualize(TwoStacks* ts) {
    printf("\nArray Visualization:\n");
    printf("Index: ");
    for (int i = 0; i < ts->size; i++) {
        printf("%2d ", i);
    }
    printf("\nValue: ");
    for (int i = 0; i < ts->size; i++) {
        if (i <= ts->top1 || i >= ts->top2) {
            printf("%2d ", ts->arr[i]);
        } else {
            printf(" - ");
        }
    }
    printf("\n       ");
    for (int i = 0; i < ts->size; i++) {
        if (i == ts->top1) printf(" ^ ");
        else if (i == ts->top2) printf(" ^ ");
        else printf("   ");
    }
    printf("\n       ");
    for (int i = 0; i < ts->size; i++) {
        if (i == ts->top1) printf("S1 ");
        else if (i == ts->top2) printf("S2 ");
        else printf("   ");
    }
    printf("\n");
}

int main() {
    int size = 10;
    TwoStacks* ts = createTwoStacks(size);
    
    printf("=== Two Stacks in Single Array ===\n\n");
    
    // Test operations
    push1(ts, 10);
    push1(ts, 20);
    push1(ts, 30);
    
    push2(ts, 100);
    push2(ts, 200);
    push2(ts, 300);
    
    visualize(ts);
    
    display1(ts);
    display2(ts);
    
    printf("\nPopped from Stack 1: %d\n", pop1(ts));
    printf("Popped from Stack 2: %d\n", pop2(ts));
    
    visualize(ts);
    
    display1(ts);
    display2(ts);
    
    free(ts);
    return 0;
}