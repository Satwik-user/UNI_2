#include <stdio.h>
#include <stdlib.h>
typedef struct Node
{
    int data;
    int pri;
    struct Node *next;
}Node;

typedef struct Queue
{
    int cap;
    int size;
    struct Node *front;
    struct Node *rear;
}Queue;

Node *createNode(int data, int priority)
{
    Node *newNode=(Node *)malloc(sizeof(Node));
    newNode->data=data;
    newNode->pri=priority;
    newNode->next=NULL;
    return newNode;
}

Queue *createQueue(int cap)
{
    Queue *newQueue=(Queue *)malloc(sizeof(Queue));
    newQueue->cap=cap;
    newQueue->size=0;
    newQueue->front=newQueue->rear=NULL;
    return newQueue;
}

int isEmpty(Queue *queue)
{
    return queue->front==NULL;
}

int isFull(Queue *queue)
{
    return queue->size==queue->cap;
}

void enqueue(Queue *queue, int data, int pri)
{
    if(isFull(queue))
    {
        printf("Queue Overflow!\n");
        return;
    }
    Node *newNode=createNode(data, pri);
    if(queue->rear==NULL)
    queue->front=queue->rear=newNode;
    else
    {
        Node *temp=queue->front;
        while(temp->next!=NULL && temp->pri<=pri)
        temp=temp->next;
        newNode->next=temp->next;
        temp->next=newNode;
    }
}

int dequeue(Queue *queue)
{
    if(isEmpty(queue))
    {
        printf("Queue Underflow!\n");
        return -1;
    }
    Node *del=queue->front;
    int data=del->data;

    queue->front=queue->front->next;
    free(del);

    return data;
}

int peek(Queue *queue)
{
    if(isEmpty(queue))
    {
        printf("Queue is empty!\n");
        return -1;
    }
    return queue->front->data;
}

void display(Queue *queue)
{
    if(isEmpty(queue))
    {
        printf("Queue is empty!\n");
        return;
    }
    Node *temp=queue->front;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\n");
}

int main()
{
    int n, ele, pri;
    printf("Enter size of priority queue:");
    scanf("%d",&n);
    
    Queue *queue=creaeteQueue(n);

    //Formation of Queue
    for(int i=0;i<n;i++)
    {
        printf("Enter element and its priority:");
        scanf("%d",&ele, &pri);
        enqueue(queue, ele, pri);
    }

    //Extraction of elements based on priority
    int data=dequeue(queue);
    printf("Element extracted based on priority sequence:%d\n",data);

    //Peek highest priority element in Queue
    data=peek(queue);
    printf("Highest priority element in queue:%d\n",data);

    //Display of entire Queue based on priority
    printf("Prioriyt Queue:");
    display(queue);
    
    return 0;
}