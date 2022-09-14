#include "a.h"
#include <stdio.h>
#include <stdlib.h>
int telindices(int[]);

int main()
{
    printf("%d\n", telindices(a));
}

int telindices(int a[])
{
    int j = 0;;
    for(int i = 0; i  < ARRAY_SIZE; i++)
    {
        if(a[i-1] < a[i]) j++;
    }
    return j;
}