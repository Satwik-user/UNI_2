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
    struct Node *front;
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
    newQueue->front=newQueue->rear=NULL;
    return newQueue;
}

int isEmpty(Queue *queue)
{
    return queue->front==NULL;
}

int isFull(Queue *queue)
{
    return queue->size>=queue->cap;
}

void enqueue(Queue *queue, int data)
{
    if(isFull(queue))
    {
        printf("Queue Overflow!\n");
        return;
    }
    Node *newNode=createNode(data);
    if(queue->rear==NULL)
    {
        queue->front=queue->rear=newNode;
    }
    else
    {
        queue->rear->next=newNode;
        queue->rear=newNode;
    }
    queue->size++;
}

int dequeue(Queue *queue)
{
    if(isEmpty(queue))
    {
        printf("Queue Underflow!\n");
        return -1;
    }
    Node *del=queue->front;
    int data=del->data;

    queue->front=queue->front->next;
    if(queue->front==NULL) queue->rear=NULL;
    free(del);
    return data;
}

int peek(Queue *queue)
{
    if(isEmpty(queue))
    {
        printf("Queue is Empty!\n");
        return -1;
    }
    return queue->front->data;
}