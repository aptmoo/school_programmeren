#include <stdlib.h>
#include <stdio.h>

int fac(int);

int main()
{
    printf("%d\n", fac(4));
}

int fac(int n)
{
    int j = 1;
    for(int i = 1; i <= n; i++)
    {
        j *= i;
    }
    return j;
} 