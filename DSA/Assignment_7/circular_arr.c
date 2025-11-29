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
        printf("Queue is Empty!\n");
        return -1;
    }

    return queue->arr[queue->front];
}

void print_queue(Queue *queue)
{
    if(isEmpty(queue))
    {
        printf("Empty Queue!\n");
        return;
    }

    for(int i=queue->front;i<=queue->rear;i++)
    printf("%d ",queue->arr[i]);
    printf("\n");
}

int main()
{
    int n, ele;
    printf("Enter size of queue:");
    scanf("%d",&n);

    Queue *queue=createQueue(n);

    //Formation of Queue
    for(int i=0;i<n;i++)
    {
        printf("Enter element:");
        scanf("%d",&ele);
        enqueue(queue, ele);
    }

    //Deleltion operation of Queue
    int del1=dequeue(queue);
    int del2=dequeue(queue);
    printf("Deleted elements of queue:%d %d\n",del1, del2);

    //Peek of 

    return 0;
}