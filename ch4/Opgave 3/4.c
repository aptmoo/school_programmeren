#include <stdio.h>
#include <stdlib.h>

#define MAX_BUFFER_SIZE 512

int s_is_lower(char s[]);
int is_upper(char c);

int main()
{
    char buffer[MAX_BUFFER_SIZE];
    char c;

    printf("Typ een zin: ");
    fgets(buffer, MAX_BUFFER_SIZE, stdin);
    printf("%d\n", s_is_lower(buffer));
}

int s_is_lower(char s[])
{
    for(int i = 0; s[i]!='\0'; i++)
    {
        if(is_upper(s[i]))
        {
            return 0;
        }
    }
    return 1;
}

// Omrin kringloopwinkel
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