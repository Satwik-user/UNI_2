#include <stdio.h>
#include <stdlib.h>
typedef struct Node
{
    int data;
    struct Node *prev;
    struct Node *next;
}Node;
void insert_ele(int data)
{
    Node *new_node=(Node *)malloc(sizeof(Node));
    
}