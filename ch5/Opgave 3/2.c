#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "a.h"

int b[ARRAY_SIZE];
int rrand(int, int);

int main()
{
    srand(time(NULL));
    for(int i = 1; i <= ARRAY_SIZE; i++)
    {
        a[i] = rrand(0, 9);
        printf("%d", a[i]);
    }
    putchar('\n');
    for (int i = 1; i <= ARRAY_SIZE; i++)
    {
        b[a[i]]++;
    }
    for (int i = 1; i <= ARRAY_SIZE; i++)
    {
        printf("%d", b[i]);
    }
    putchar('\n');
}

int rrand(int min, int max)
{
    return rand() % (max + 1 - min) + min;
}