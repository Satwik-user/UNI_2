#include <stdio.h>
#include <stdlib.h>
typedef struct Queue
{
    int *arr;
    int cap;
    int front;
    int rear;
}Queue;

Queue *createQueue(int cap)
{
    Queue *queue=(Queue *)malloc(sizeof(Queue));
    queue->cap=cap;
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
    return (queue->rear+1)%queue->cap==queue->front;
}

void enqueue(Queue *queue, int data)
{
    if(isFull(queue))
    {
        printf("Queue Overflow!\n");
        return;
    }

    if(isEmpty(queue))
    queue->front=queue->rear=0;
    else
    queue->rear=(queue->rear+1)%queue->cap;

    queue->arr[queue->rear]=data;
}

int dequeue(Queue *queue)
{
    if(isEmpty(queue))
    {
        printf("Queue Underflow!\n");
        return -1;
    }

    int data=queue->arr[queue->front];

    if(queue->front==queue->rear)
    queue->front=queue->rear=-1;
    else
    queue->front=(queue->front+1)%queue->cap;

    return data;
}

int peek(Queue *queue)
{
    if(isEmpty(queue))
    {
        printf("Queue is Empty!\n")
    }
}