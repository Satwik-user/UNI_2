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
        printf("Queue A Underflow!\n");
        return -1;
    }
    int data=queue->arr[queue->frontA];

    if(queue->frontA==queue->rearA)
    queue->frontA=queue->rearA=-1;
    else
    queue->frontA++;

    return data;
}

void enqueueB(Queue *queue, int data)
{
    if(queue->rearA=queue->rearB-1)
    {
        printf("Queue B Overflow!\n");
        return;
    }
    if(queue->frontB==queue->cap && queue->rearB==queue->cap)
    queue->frontB=queue->rearB=queue->cap-1;
    else
    queue->rearB--;

    queue->arr[queue->rearB]=data;
}

int dequeueB(Queue *queue)
{
    if(queue->frontB==queue->cap-1)
    {
        printf("Queue B Underflow!\n");
        return -1;
    }
    int data=queue->arr[queue->frontB];
    if(queue->frontB==queue->rearB)
    queue->frontB=queue->rearB=queue->cap;
    else
    queue->frontB++;

    return data;
}

int peekA(Queue *queue)
{
    if(queue->frontA==-1)
    {
        printf("Queue A is empty!\n");
        return -1;
    }
    
    return queue->arr[queue->frontA];
}

int peekB(Queue *queue)
{
    if(queue->frontB==-1)
    {
        printf("Queue B is empty!\n");
        return -1;
    }

    return queue->arr[queue->frontB];
}

void displayA(Queue *queue)
{
    if(queue->frontA==-1)
    {
        printf("Queue A is empty!\n");
        return;
    }
    for(int i=queue->frontA;i<=queue->rearA;i++)
    printf("%d ",queue->arr[i]);

    printf("\n");
}

void displayB(Queue *queue)
{
    if(queue->frontB==-1)
    {
        printf("Queue B is empty!\n");
        return;
    }
    for(int i=queue->frontB;i<=queue->rearB;i++)
    printf("%d ",queue->arr[i]);

    printf("\n");
}

int main()
{
    int n, n1, n2, ele;
    printf("Enter total size of queue:");
    scanf("%d",&n);

    Queue *queue=createQueue(n);

    //Formation of Queue A
    printf("Enter size of Queue A:");
    scanf("%d",&n1);
    
    
    return 0;
}