#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define MAX_BUFFER_SIZE 64

int is_schrikkel(int);

int main()
{
    char buffer[MAX_BUFFER_SIZE];
    int i;

    printf("Noem een jaar: ");
    fgets(buffer, MAX_BUFFER_SIZE, stdin);
    i = atoi(buffer);

    if(is_schrikkel(i))
        printf("Jaar %d is een schrikkeljaar.\n", i);
    else
        printf("Jaar %d is geen schrikkeljaar.\n", i);
}

int is_schrikkel(int jaar)
{
    return ((jaar % 4 == 0 && jaar % 100 != 0) || jaar % 400 == 0);
}