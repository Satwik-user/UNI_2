#include <stdio.h>
#include <stdlib.h>
typedef struct Queue
{
    int data;
    struct Queue *head;
    struct Queue rear;
}Queue;

