#include <stdlib.h>
#include <stdio.h>

int pow(int, int);

int main()
{
    printf("%d", pow(2, 10));
}

int pow(int g, int m)
{
    int temp = g;
    for(int i = 2; i <= m; i++)
    {
        g*= temp;
    }
    return g;
}