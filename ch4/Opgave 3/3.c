#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define MAX_BUFFER_SIZE 512

int is_upper(char c);

int main()
{
    char buffer[MAX_BUFFER_SIZE];
    char c;

    printf("Typ een zin: ");
    fgets(buffer, MAX_BUFFER_SIZE, stdin);

    c = buffer[0];
    printf("%d\n", is_upper(c));
}

int is_upper(char c)
{
    // Make sure that the char isnt a null terminator
    if(c == '\0') return -1;

    // If the char is an upper cast chararcter, return true
    if(c >= 41 && c <= 90)
    {
        return 1;
    }
    // Return 0
    return 0;
}