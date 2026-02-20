#include <stdio.h>

typedef struct Item
{
    float weight;
    float profit;
    float ratio;
}item;

int main()
{
    int n;
    printf("Enter no of objects:");
    scanf("%d", &n);

    item *items;
    items = malloc(n * sizeof(int));

    printf("Enter weight array:");
    for(int i=0; i<n; i++)
    scanf("%d", &items[i].weight);
    
    free(items);
    return 0;
}