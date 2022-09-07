#include <stdio.h>
#include <stdlib.h>

int sltncnt(int, int, int);

int main()
{
    printf("%d\n", sltncnt(1, 3, 2));
}

int sltncnt(int a, int b, int c)
{
    int d = ((b*b) - 4 * a * c);

    if(d > 0)
        return 2;
    else if(d == 0)
        return 1;
    else
        return 0;
}

