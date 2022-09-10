#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_BUFFER_SIZE 512

char klinkers[] = "aeiouAEIOU";

int klinkers_tel(char s[]);

int main()
{
    char buffer[MAX_BUFFER_SIZE];

    printf("Typ een zin: ");
    fgets(buffer, MAX_BUFFER_SIZE, stdin);
    printf("%d\n", klinkers_tel(buffer));
}

int klinkers_tel(char s[])
{
    int n = 0;
    for(int i = 0; s[i] != '\0'; i++)
    {
        for(int x = 0; x < strlen(klinkers); x++)
        {
            if(s[i] == klinkers[x]) n++;
        }
    }
    return n;
}