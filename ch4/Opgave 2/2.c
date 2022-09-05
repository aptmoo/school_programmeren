#include <stdio.h>
#include <stdlib.h>

char lowercast(char);

int main()
{
    for (int i = 0; i < 128; i++)
    {
        putc(lowercast(i), stdout);
    }
}

char lowercast(char c)
{
    if(c >= 97 && c <= 122)
    {
        return c - 32;
    }
    return c;
}