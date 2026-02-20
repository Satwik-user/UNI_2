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

    int cap;
    printf("Enter capacity of sack:");
    sacnf("%d", &cap);

    for(int i=0; i<n; i++)
    items[i].ratio = items[i].profit / items[i].weight;

    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<n-i-1; j++)
        {
            if(items[j].ratio < items[j + 1].ratio)
            {
                float temp = items[j].ratio;
                items[j].ratio = items[j + 1].ratio;
                items[j + 1].ratio = temp;
            }
        }
    }

    int total_profit = 0;
    for(int i=0; i<n; i++)
    {
        if(cap == 0)
        break;

        if(items[i].weight < cap)
        {
            cap -= items[i].weight;
            total_profit += items[i].profit;
        }
    }
    
    free(items);
    return 0;
}