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

    queue->arr[queue->front]=data;
    queue->size++;
}

void insertRear(Queue *queue, int data)
{
    if(isFull(queue))
    {
        printf("Queue Overflow!\n");
        return;
    }

    if(isEmpty(queue))
    queue->front=queue->rear=0;
    else
    queue->rear=(queue->rear-1)%queue->cap;

    queue->arr[queue->rear]=data;
    queue->size++;
}

int delFront(Queue *queue)
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
    queue->front=(queue->front-1)%queue->cap;

    queue->size--;
    return data;
}

int delRear(Queue *queue)
{
    if(isEmpty(queue))
    {
        printf("Queue Underflow!\n");
        return -1;
    }

    int data=queue->arr[queue->rear];

    if(queue->front==queue->rear)
    queue->front=queue->rear=-1;
    else
    queue->rear=(queue->rear-1+queue->cap)%queue->cap;

    queue->size--;
    return data;
}

int peekFront(Queue *queue)
{
    if(isEmpty(queue))
    {
        printf("Empty queue!\n");
        return -1;
    }

    return queue->arr[queue->front];
}

int peekRear(Queue *queue)
{
    if(isEmpty(queue))
    {
        printf("Empty queue\n");
        return -1;
    }

    return queue->arr[queue->rear];
}

void print_queue(Queue *queue)
{
    if(isEmpty(queue))
    {
        printf("Empty queue!\n");
        return;
    }

    for(int i=queue->front;i<=queue->rear;i++)
    printf("%d ",queue->arr[i]);

    printf("\n");
}

int main()
{
    int n, ele;
    printf("Enter sze of queue:");
    scanf("%d",&n);

    Queue *queue=createQueue(n);

    //Formation of Queue
    for(int i=0;i<n;i++)
    {
        printf("Enter element:");
        scanf("%d",&ele);
        insertRear(queue, ele);
    }

    //Insertion at front of Queue
    printf("Enter element for insertion at front:");
    scanf("%d",&ele);
    insertFront(queue, ele);

    //Insertion at rear of Queue
    printf("Enter element for insertion at rear:");
    scanf("%d",&ele);
    insertRear(queue, ele);

    //Deletion at front of Queue
    int data=delFront(queue);
    printf("Deleted element from front of queue:%d\n",data);

    //Deletion at rear of Queue
    data=delRear(queue);
    printf("Deleted element from rear of queue:%d\n",&data);

    //Peek front element of Queue
    data=peekFront(queue);
    printf("Current front element of queue:%d\n",data);

    //Peek rear element of Queue
    data=peekRear(queue);
    printf("Current rear element of queue:%d\n",data);

    //Display of modified Queue
    printf("Modified Queue:");
    print_queue(queue);
    
    return 0;
}