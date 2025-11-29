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
}