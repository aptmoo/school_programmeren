#include <stdio.h>
#include <stdlib.h>

// Meer dan 64 karakters is een beetje overdreven
#define MAX_BUFFER_LENGTH 64

int main()
{
    // Creer de variabelen die we later nodig hebben
    unsigned int ribbe_size, doosje_size, resultaat;
    char ribbe_buffer[MAX_BUFFER_LENGTH];
    char doosje_buffer[MAX_BUFFER_LENGTH];

    // Vraag de gebruiker voor de lengte van de ribben
    printf("Voer de lengte van de ribben in: ");
    fgets(ribbe_buffer, MAX_BUFFER_LENGTH, stdin);

    // Vraag de gebruiker deze keer naar de doosjes
    printf("Voer de lengte van de doosjes in: ");
    fgets(doosje_buffer, MAX_BUFFER_LENGTH, stdin);

    // Verander de strings in een int
    // atoi houdt er rekening mee dat de invoer misschien geen getal is,
    // en geeft dan een 0 terug.
    ribbe_size = atoi(ribbe_buffer);
    doosje_size = atoi(doosje_buffer);

    // Bereken en print het resultaat
    resultaat = ribbe_size / doosje_size;
    printf("Er passen %d doosjes in de grote doos.\n", resultaat);
}