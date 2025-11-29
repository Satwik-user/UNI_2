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
    queue->front=-1;
    queue->rear=-1;
    queue->arr=(int *)malloc(cap*sizeof(int));
    return queue;
}

int isEmpty(Queue *queue)
{
    return queue->front==queue->rear-1;
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

int dequeue(Queue *queue)
{
    if(isEmpty(queue))
    {
        printf("Queue is empty\n");
        return;
    }
    return queue->arr[queue->front++];
}

int peek(Queue *queue)
{
    if(isEmpty(queue))
    {
        printf("Queue is empty\n");
        return;
    }
    return queue->arr[queue->front];
}

void print_queue(Queue *queue)
{
    if(isEmpty(queue))
    {
        printf("Queue is empty\n");
        return;
    }
    for(int i=queue->front+1;i<queue->rear;i++)
    printf("%d\n",queue->arr[i]);
}

int main()
{
    //Formation of Queue(Enqueue operation)
    int n, ele;
    printf("Enter size of queue:");
    scanf("%d",&n);
    Queue *queue=createQueue(n);
    for(int i=0;i<n;i++)
    {
        printf("Enter element:");
        scanf("%d",&ele);
        enqueue(&queue, ele);
    }
    pritnf("Original Queue:\n");
    print_queue(queue);

    //Dequeue operation
    printf("Deleted element from queue:%d\n",dequeue(queue));
    printf("Queue after deletion operation:\n");
    print_queue(queue);

    //Peek operation
    int front=peek(queue);
    printf("Fornt element of queue:%d\n",front);
    
    //Display modified queue
    printf("Final queue:\n");
    print_queue(queue);
    
    return 0;
}