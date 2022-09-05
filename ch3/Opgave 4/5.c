#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define MAX_BUFFER_SIZE 64

float vraagOmGetal(const char*);
float pythagoras(float, float);

int main()
{
    float s0 = vraagOmGetal("Wat is de lengte van de eerste zijde? ");
    float s1 = vraagOmGetal("Wat is de lengte van de tweede zijde? ");
    float s2 = vraagOmGetal("Wat is de lengte van de derde zijde? ");
    //float s2 = 3.605551275463989;

    if(pythagoras(s0, s1) == s2)
        printf("Gefeliciteerd! Je driehoek is rechthoekig.\n");
    else
        printf("Sorry, je driehoek is niet recthoekig.\n");
}

float vraagOmGetal(const char* bericht)
{
    printf(bericht);
    char buffer[MAX_BUFFER_SIZE];
    fgets(buffer, MAX_BUFFER_SIZE, stdin);
    return atof(buffer);
}

float pythagoras(float x, float y)
{
    return sqrtf((x * x) + (y * y));
}