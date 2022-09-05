#include <stdio.h>
#include <math.h>
#include <stdlib.h>

// Typedef voor punten op de kaart
// Coordinaten mogen niet lager dan 0 zijn.
// Ik ga er niet van uit dat manhattan negatieve straatnummers heeft.
typedef struct
{
    unsigned int x;
    unsigned int y;
} point_t;

unsigned int ptcmp(point_t, point_t);

int main()
{
    // Defenieer twee punten
    point_t p0 = {0, 1}; 
    point_t p1 = {10, 5};

    // Print de afstand voor de gebruiker~
    printf("De afstand tussen punt 1 en punt 2 is: %d\n", ptcmp(p0, p1));
}

unsigned int ptcmp(point_t _p0, point_t _p1)
{
    // Tijdelijke variabelen.
    unsigned x, y;

    // Bereken het verschil tussen de twee punten
    x = _p1.x - _p0.x;
    y = _p1.y - _p0.y;

    // Tel de verschillen op en geeft het terug
    return x + y;
}
