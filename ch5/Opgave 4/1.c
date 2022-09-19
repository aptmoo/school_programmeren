#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

#define ARRAY_SIZE_X 60
#define ARRAY_SIZE_Y 40

int nrand(int,int,int,int);
int rrand(int, int);


int a[ARRAY_SIZE_X][ARRAY_SIZE_Y];
int waterpeil = 2;

int main()
{
    srand(time(NULL));

    int i, j;
    int ondergelopen = 0;

    for(i = 0; i < ARRAY_SIZE_X; i++)
    {
        for(j = 0; j < ARRAY_SIZE_Y; j++)
        {
            a[i][j] = nrand(0, 6, a[i][j-1], 1);
            printf("%d ", a[i][j]);

            if(a[i][j] <= waterpeil)
            {
                ondergelopen++;
            }
        }
        printf("\n");
    }
    printf("Ondergelopen: %d\n", ondergelopen);
}

int nrand(int min, int max, int last, int deviation)
{
    int i = rrand(last-deviation, last+deviation);

    if(i > max) i = max;
    if(i < min) i = min;
}

int rrand(int min, int max)
{
    return rand() % (max + 1 - min) + min;
}