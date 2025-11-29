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
    int size;
    struct Node *head;
    struct Node *rear;
}Queue;

Node *createNode(int data)
{
    Node *newNode=(Node *)malloc(sizeof(Node));
    newNode->data=data;
    newNode->next=NULL;
    return newNode;
}

Queue *createQueue(int cap)
{
    Queue *newQueue=(Queue *)malloc(sizeof(Queue));
    newQueue->cap=cap;
    newQueue->size=0;
    newQueue->head=newQueue->rear=NULL;
    return newQueue;
}

int isEmpty(Queue *queue)
{
    
}