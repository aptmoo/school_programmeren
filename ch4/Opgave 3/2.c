#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int string_staartstuk(char[], char[]);

int main()
{
    int i = string_staartstuk("abcdef", "defg");
    printf("%d\n", i);
}

int string_staartstuk(char s[], char t[])
{
    int x, y;
    x = strlen(s) - strlen(t);
    printf("%d\n", x);
    if(x < 0) return 0;

    for(y = 0;s[x] != '\0' && t[y] != '\0' && t[y] == s[x]; x++, y++);

    if(t[y] == '\0') return 1;
    return 0;
}