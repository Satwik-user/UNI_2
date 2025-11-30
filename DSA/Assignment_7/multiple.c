#include <stdio.h>
#include <stdlib.h>
typedef struct Queue
{
    int *arr;
    int cap;
    int frontA, frontB;
    int rearA, rearB;
}Queue;

