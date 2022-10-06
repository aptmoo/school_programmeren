#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int minlog(int, int);

int main(int argc, char const *argv[])
{
    printf("ye %d\n", minlog(2, 4004));
    printf("%f\n", (log(4004)/log(2)));
    return 0;
}

int minlog(int g, int x)
{
    int m;
    for(m = 1; (pow(g, m) <= x); m++)
        ;
    return m;
}