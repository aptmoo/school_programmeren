#include <stdio.h>

int i[6] = {4, 3, 4, 9, 2, 8};
int j[6] = {4, 5, 2, 5, 7, 3};

int arraystuffs(int[6], int[6]);

int main(int argc, char const *argv[])
{
    printf("%d", arraystuffs(i, j));
    return 0;
}

int arraystuffs(int a[6], int b[6])
{
    if(a[0] > b[0]) 
        return -1;
    if (a[0] < b[0])
        return 1;
    if (a[0] = b[0])
        return 0;
    return 420;
}