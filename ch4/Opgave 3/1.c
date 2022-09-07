#include <stdio.h>
#include <stdlib.h>

int strindex(char source[], char searchfor[]);

int main()
{
    printf("%d", strindex("Nico is een rotjoch", "rotjoch"));
}

int strindex(char s[], char p[])
{
    int i, j, k;

    int x, y ,z;
    for(x = 0; s[x] != '\0'; x++)
    {
        for(y = x, z=0; s[y] == p[z] && p[z] != '\0'; y++, z++);
            if(p[z] == '\0') return 1;
    }
    return 0;
}


// int strprt(char s[], char p[])
// {
//     int x, y ,z;
//     for(x = 0; x < 10; x++)
//     {
//         putchar(s[x]);
//         //for(y = x, z=0; s[y] == p[z] && p[z] != '\0'; y++, z++){printf("%d:%d", y, z); putchar(s[y]); putchar(p[z]); };
//         //if(p[z] == '\0') return 1;
//     }
//     return 0;
// }

// char lowercast(char c)
// {
//     // Check dat c tussen 97(kleine letter a) en 122 (kleine letter z) zit.
//     if (c >= 97 && c <= 122)
//     {
//         return c - 32;
//     }
//     return c;
// }