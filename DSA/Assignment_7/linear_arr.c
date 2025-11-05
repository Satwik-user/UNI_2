#include <stdio.h>
#include <stdlib.h>
typedef struct Queue
{
    int *arr;
    int cap;
    int head;
    int rear;
}Queue;

Queue *createQueue(int cap)
{
    Queue *queue=(Queue *)malloc(sizeof(Queue));
    queue->cap=cap;
    queue->head=-1;
    queue->rear=0;
    queue->arr=(int *)malloc(cap*sizeof(int));
    return queue;
}

int isEmpty(Queue *queue)
{
    return queue->head==queue->rear-1;
}

int isFull(Queue *queue)
{
    return queue->rear==queue->cap;
}

void enqueue(Queue *queue, int data)
{
    if(isFull(queue))
    {
        printf("Queue is full\n");
        return;
    }
    queue->arr[queue->rear++]=data;
}

void dequeue(Queue *queue)
{
    if(isEmpty(queue))
    {
        printf("Queue is empty\n");
        return;
    }
    queue->head++;
}

int peek(Queue *queue)
{
    if(isEmpty(queue))
    {
        printf("Queue is empty\n");
        return;
    }
    return queue->arr[queue->head];
}

void print_queue(Queue *queue)
{
    if(isEmpty(queue))
    {
        printf("Queue is empty\n");
        return;
    }
    for(int i=queue->head;i<queue->rear;i++)
    printf("%d\n",queue->arr[i]);
}