#include <stdio.h>
int rec_fact(int n)
{
    if(n==0)
    return 1;
    else 
    n*rec_fact(n-1);
}