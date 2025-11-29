#include <stdio.h>
#include <stdlib.h>
typedef struct Node
{
    int data;
    struct Node *next;
}Node;

typedef struct Queue
{
    int cap;
    struct Queue *head;
    struct Queue *rear;
}Queue;

Node *createNode(int cap)
{
    Node *newNode=(Node *)malloc(sizeof(Node));
    
}