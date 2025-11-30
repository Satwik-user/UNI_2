#include <stdio.h>
#include <stdlib.h>
typedef struct Queue
{
    int *arr;
    int cap;
    int frontA, frontB;
    int rearA, rearB;
}Queue;

Queue *createQueue(int cap)
{
    Queue *newQueue=(Queue *)malloc(sizeof(Queue));
    newQueue->cap=cap;
    newQueue->frontA=newQueue->rearA=-1;
    newQueue->frontB=newQueue->rearB=cap;
    newQueue->arr=(int *)malloc(cap*sizeof(int));
    return newQueue;
}

void enqeueA(Queue *queue, int data)
{
    if(queue->rearA=queue->rearB-1)
    {
        printf("Queue A Overflow!\n");
        return;
    }
    if(queue->frontA==-1 && queue->rearA==-1)
    queue->frontA=queue->rearA=0;
    else
    queue->rearA++;

    queue->arr[queue->rearA]=data;
}

int dequeueA(Queue *queue)
{
    if(queue->frontA==-1)
    {
        printf("Queue A Underflow!\n")
    }
}