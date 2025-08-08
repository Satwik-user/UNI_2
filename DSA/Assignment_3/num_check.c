#include <stdio.h>
int main()
{
    int p=0,n=0,e=0,o=0;
    printf("Enter 25 numbers-\n");
    for(int i=0;i<25;i++)
    {
        printf("Enter a number:");
    }
    for(int i=0;i<25;i++)
    {
        if(i>0)
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
    printf("NO. of even numbers:%d\n",e);
    
    return 0;
}