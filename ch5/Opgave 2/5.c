#include <stdio.h>
#include <stdlib.h>
#include "a.h"

int main()
{
    int i, j;
    for(i = 0, j = ARRAY_SIZE; i < ARRAY_SIZE && j > 0; i++, j--)
    {
        if(a[i] == j && a[j] == i)
        {
            printf("Yay\n");
        }
    }
}