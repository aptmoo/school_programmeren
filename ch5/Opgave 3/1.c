#include <stdlib.h>
#include <stdio.h>
#include "a.h"

int fac(int);

int main()
{
    for(int i = 0; i < ARRAY_SIZE; i++)
    {
        a[i] = fac(a[i]);
    }
    printf("[ ");
    for(int i = 0; i < ARRAY_SIZE; i++)
    {
        printf("%d ", a[i]);
    }
    printf("]\n");
}

int fac(int n)
{
    int j = 1;
    for(int i = 1; i <= n; i++)
    {
        j *= i;
    }
    return j;
} 