#include <stdio.h>
#include <stdlib.h>
#include "a.h"

int rrand(int, int);

int main()
{
    int grootste = 0;
    int aantal = 0;

    // Zoek de grootste door middel van een for loop
    for(int i = 0; i < ARRAY_SIZE; i++)
    {
        if(a[i] > grootste)
            grootste = a[i];
    }

    // Weergeef het voor de gebruiker.
    printf("Het grootste getal uit de reeks[ ");
    for(int i = 0; i < ARRAY_SIZE; i++)
    {
        printf("%d ", a[i]);
    }
    printf("] is %d\n", grootste);
}