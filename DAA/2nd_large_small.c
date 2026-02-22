#include <stdio.h>
typedef struct
{
    int max, secondMax;
    int min, secondMin;
}Result;

Result merge(Result left, Result right)
{
    Result res;
    if(left.max > right.max)
    {
        res.max = left.max;
        res.secondMax = (left.secondMax > right.max)? left.secondMax: right.max;
    }
}