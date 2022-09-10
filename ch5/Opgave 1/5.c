#include <stdio.h>
#include <stdlib.h>

int driehoek(int s, char c);

int main()
{
    driehoek(4, '+');
}

int driehoek(int s, char c)
{
    for(int i = s; i > 0; i--)
    {
        for(int j = 0; j < i; j++)
        {
            putchar(c);
        }
        printf("\n");
    }           
}