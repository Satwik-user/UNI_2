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