#include <stdio.h>

#define VOTE_VALIDATE(x, y, z) printf("%d\n", is_majority(x, y, z));

int is_majority(int, int, int);

int main()
{
    VOTE_VALIDATE(1, 1, 1);
    VOTE_VALIDATE(1, 1, 0);
    VOTE_VALIDATE(1, 0, 1);
    VOTE_VALIDATE(0, 1, 1);
    VOTE_VALIDATE(1, 0,0);
    VOTE_VALIDATE(0, 1, 0);
    VOTE_VALIDATE(0, 0, 1);
    VOTE_VALIDATE(0, 0, 0);
}

int is_majority(int a, int b, int c)
{
    return (a + b + c) >= 2;
}