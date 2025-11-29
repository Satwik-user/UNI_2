#include <stdio.h>
#include <stdlib.h>
typedef struct Queue
{
    int *arr;
    int cap;
    int size;
    int front;
    int rear;
}Queue;

Queue *createQueue(int cap)
{
    Queue *queue=(Queue *)malloc(sizeof(Queue));
    queue->cap=cap;
    queue->size=0;
    queue->front=queue->rear=-1;
    queue->arr=(int *)malloc(cap*sizeof(int));
    return queue;
}

int isEmpty(Queue *queue)
{
    return queue->front==-1;
}

int isFull(Queue *queue)
{
    return queue->size==queue->cap;
}

void insertFront(Queue *queue, int data)
{
    if(isFull(queue))
    {
        printf("Queue Overflow!\n");
        return;
    }

    if(isEmpty(queue))
    queue->front=queue->rear=0;
    else
    queue->front=(queue->front-1+queue->cap)%queue->cap;

    queue->size++;
}

void insertRear(Queue *queue, int data)
{
    if()
}