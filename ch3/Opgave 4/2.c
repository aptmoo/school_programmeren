#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>

#define MAX_BUFFER_SIZE 4096

int rond_af(int, int);

int main()
{
    // Variabelen voor later
    char buffer[MAX_BUFFER_SIZE];
    int n;

    // Vraag de gebruiker voor de hoeveelheid
    printf("Hoe duur is uw brood in centen: ");
    fgets(buffer, MAX_BUFFER_SIZE, stdin);

    // Bereken n
    n =  rond_af(atoi(buffer), 5);

    // Print de waarde van n
    printf("U moet afgrond %d cent betalen.\n", n);
}

int rond_af(int n, int multiple)
{
    int a = (n / multiple) * multiple;
    int b = a + multiple;
    return (n - a > b - n)? b : a;
}

// Gierige afronding
/*
int rond_af(int n, int multiple)
{   
    // n%multiple is 0 als multiple n perfect deelt.
    // Dit zorgt ervoor dat we 100 niet verkeerd afronden naar 105
    // 99 rondt aan de andere kant wel af naar 100.
    if(n%multiple == 0) return n;

    // Het proces van het afronden is als volgt:
    // Bereken n / 5
    // Rond het af naar beneden (floor)
    // Vermenigvuldig dat met 5
    // Tel er nog 5 bij op
    // En tada je hebt je gemiddelde.
    return (floor(n / multiple) * multiple) + multiple;
}
*/