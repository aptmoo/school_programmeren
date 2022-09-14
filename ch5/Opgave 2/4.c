#include <stdio.h>
#include <stdlib.h>
#include "a.h"

int main()
{
    int grootste = 0;
    int aantal = 0;

    // Zoek de grootste door middel van een for loop
    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        if (a[i] > grootste)
            grootste = a[i];
    }

    // Weergeef het voor de gebruiker.
    printf("Lijst a is maximaal bij de indices: ");
    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        if(a[i] == grootste)
        {
            printf("%d ", i+1);
        }
    }
    printf(", waarbij de de maxima %d is.\n", grootste);
}