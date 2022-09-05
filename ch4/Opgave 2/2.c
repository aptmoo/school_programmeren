#include <stdio.h>
#include <stdlib.h>

char lowercast(char);

int main()
{
    // Maak een simpele ascii tabel
    for (int i = 0; i < 128; i++)
    {
        printf("%d: ", i);
        putc(lowercast(i), stdout);
        putc('\n', stdout);
    }
}

char lowercast(char c)
{
    // Check dat c tussen 97(kleine letter a) en 122 (kleine letter z) zit.
    if(c >= 97 && c <= 122)
    {
        return c - 32;
    }
    return c;
}