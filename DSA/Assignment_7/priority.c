#include <stdio.h>
#include <stdlib.h>
typedef struct Node
{
    int data;
    int pri;
    struct Node *next;
}Node;

typedef struct Queue
{
    int cap;
    int size;
    struct Node *front;
    struct Node *rear;
}Queue;

Node *createNode(int data, int priority)
{
    Node *newNode=(Node *)malloc(sizeof(Node));
    newNode->data=data;
    newNode->pri=priority;
    newNode->next=NULL;
    return newNode;
}

Queue *createQueue(int cap)
{
    Queue *newQueue=(Queue *)malloc(sizeof(Queue));
    newQueue->cap=cap;
    newQueue->size=0;
    newQueue->front=newQueue->rear=NULL;
    return newQueue;
}