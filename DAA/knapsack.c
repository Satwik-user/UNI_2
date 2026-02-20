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

    printf("Enter profit array:");
    for(int i=0; i<n; i++)
    scanf("%d", &items[i].profit);

    for(int i=0; i<n; i++)
    items[i].ratio = items[i].profit / items[i].weight;

    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<n-i-1; j++)
        {
            
        }
    }
    
    free(items);
    return 0;
}