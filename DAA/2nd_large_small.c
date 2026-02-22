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
    else
    {
        res.max = right.max;
        res.secondMax = (right.secondMax > left.max)? right.secondMax: left.max;
    }

    if(left.min < right.min)
    {
        res.min = left.min;
        res.secon
    }
}