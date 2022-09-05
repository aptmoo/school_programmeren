#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define MAX_BUFFER_SIZE 64

int isSquare(int);

int main()
{
    char buffer[MAX_BUFFER_SIZE];
    int n;
    
    printf("Noem een getal: ");
    fgets(buffer, MAX_BUFFER_SIZE, stdin);

    n = atoi(buffer);

    if(isSquare(n))
        printf("Yay je getal is een geheel kwadraat!\n");
    else
        printf("Jammer, je getal is geen geheel kwadraat.\n");
}

int isSquare(int a)
{
    float i = sqrtf(a);
    return rintf(i) == i;
}