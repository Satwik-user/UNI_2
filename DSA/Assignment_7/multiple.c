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
    
}