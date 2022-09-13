#include "a.h"
#include <stdio.h>
#include <stdlib.h>

int sommatie(int[]);

int main()
{
    printf("%d\n",sommatie(a));
}

int sommatie(int a[])
{
    int j = 0;
    for(int i = 0; i < ARRAY_SIZE; i++)
    {
        j+= a[i];
    }
    return j;
}