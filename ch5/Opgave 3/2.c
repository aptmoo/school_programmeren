#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "a.h"

int b[ARRAY_SIZE];
int rrand(int, int);

int main()
{
    srand(time(NULL));
    for(int i = 0; i <= ARRAY_SIZE; i++)
    {
        b[i] = rrand(0, 9);
    }
    for(int i = 0; i < ARRAY_SIZE; i++)
    {
        if(b[i] == a[i])
        {
            printf("%d\n", i);
        }
    }
}

int rrand(int min, int max)
{
    return rand() % (max + 1 - min) + min;
}