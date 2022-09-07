#include <stdio.h>
#include <math.h>

int isMultipleOf(int, int);

int main()
{
    printf("%d\n", isMultipleOf(10, 1));
}

int isMultipleOf(int a, int b)
{
    return (a%b) == 0;
}