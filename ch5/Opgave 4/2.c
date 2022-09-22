#include <stdio.h>
#include <stdlib.h>

#define ARRAY_SIZE 15

void print_a(int[ARRAY_SIZE][ARRAY_SIZE]);
int a[ARRAY_SIZE][ARRAY_SIZE];

int main()
{
    print_a(a);
    for(int i = 0; i < ARRAY_SIZE; i++)
    {
        a[i][0] = 0;
        //a[i][i] = 1;
        a[0][i] = 1;
    }
    a[0][0] = 1;

    for(int y = 1; y < ARRAY_SIZE; y++)
    {
        for(int x = 1; x <= y; x++)
        {
            a[x][y] = a[x][y-1] + a[x-1][y-1];
            // printf("%d:%d:", a[x][y-1], a[x-1][y-1]);
            // printf("%d ", a[x][y]);
        }
        // putchar('\n');
    }

    for(int y = 0; y < ARRAY_SIZE; y++)
    {
        for(int x = 0; x < ARRAY_SIZE; x++)
        {
            printf("%d ", a[x][y]);
        }
        putchar('\n');
    }
    print_a(a);
}

void print_a(int a[ARRAY_SIZE][ARRAY_SIZE])
{
    for (int x = 0; x < ARRAY_SIZE; x++)
    {
        for (int y = 0; y < ARRAY_SIZE; y++)
        {
            printf("%d ", a[y][x]);
        }
        putchar('\n');
    }
}