#include <stdio.h>
#include <stdlib.h>
#include "a.h"

int segment(int[]);

int main()
{
    printf("%d\n", segment(a));
}

int segment(int a[])
{
    int x, y;
    int langste = 0;
    int lengte = 1;
    for(x = 0; x < ARRAY_SIZE; x++)
    {
        if(a[x] < a[x+1])
        {
            lengte++;
        }
        else
        {
            if(lengte > langste) langste = lengte;
            lengte = 1;
        }
    }
    return langste;
}