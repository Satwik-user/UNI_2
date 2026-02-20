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

    for(int i=0; i<n; i++)
    
    
    free(items);
    return 0;
}