#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>

#define MAX_NUMBERS 4

int rrand(int, int);

int main()
{
    int numbers[MAX_NUMBERS];
    int grootste = 0;
    int aantal = 0;

    // Set random seed based on current time.
    srand(time(NULL));

    // Vul de array op met willekeurige nummers
    for(int i = 0; i <= MAX_NUMBERS; i++)
    {
        numbers[i] = rrand(0, 9);
    }

    // Zoek de grootste door middel van een for loop
    for(int i = 0; i <= MAX_NUMBERS; i++)
    {
        if(numbers[i] > grootste)
            grootste = numbers[i];
    }

    // Weergeef het voor de gebruiker.
    printf("Het grootste getal uit de reeks[ ");
    for(int i = 0; i <= MAX_NUMBERS; i++)
    {
        printf("%d ", numbers[i]);

        // Kijk hoevaak het grootste getal voorkomt.
        if(numbers[i] == grootste)
            aantal++;
    }
    printf("] is %d, die %d keer voorkwam.\n", grootste, aantal);
}

// Random functie met limiet.
int rrand(int min, int max)
{
    return rand() % (max + 1 - min) + min;
}