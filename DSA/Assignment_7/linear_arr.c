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

