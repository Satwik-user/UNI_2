#include <stdio.h>
#include <stdlib.h>
typedef struct Node
{
    int data;
    struct Node *prev;
    struct Node *next;
}Node;
Node *createNode(int data)
{
    Node *new_node=(Node *)malloc(sizeof(Node));
    new_node->data=data;
    new_node->prev=NULL;
    new_node->next=NULL;

}