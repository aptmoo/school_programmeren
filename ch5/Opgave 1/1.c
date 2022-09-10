#include <stdio.h>
#include <stdlib.h>

#define MAX_BUFFER_SIZE 512

int dingens(int);

int main()
{
    char buffer[MAX_BUFFER_SIZE];
    int i;

    printf("Noem een getal: ");
    fgets(buffer, MAX_BUFFER_SIZE, stdin);
    i = atoi(buffer);
    printf("%d\n", dingens(i));
}

int dingens(int n)
{
    for(int i = 1; i < n; i++)
    {
        if(n%i == 0) printf("%d\n", i);
    }
}