#include <stdio.h>
int main()
{
    int p=0,n=0,e=0,o=0;
    printf("Enter 25 numbers-\n");
    int a[25];
    for(int i=0;i<25;i++)
    {
        printf("Enter a number:");
        scanf("%d",&a[i]);
    }
    for(int i=0;i<25;i++)
    {
        if(a[i]>0)
        p++;
        if(i<0)
        n++;
        if(i%2==0)
        e++;
        if(i%2!=0)
        o++;
    }
    printf("No. of positive numbers:%d\n",p);
    printf("No. of negative numbers:%d\n",n);
    printf("No. of even numbers:%d\n",e);
    printf("No. of odd numbers:%d\n",o);
    
    return 0;
}