#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct
{
    int x, y;
    float s;
} circle_t;

int checkSphere(circle_t, circle_t);
float pythagoras(float, float);

int main()
{
    circle_t c0 ={2, 8, 1};
    circle_t c1 = {-16, -29, 1};

    if(checkSphere(c0, c1))
    {
        printf("Sorry, je cirkels overlappen.\n");
    }
    else
    {
        printf("Yay! Je cirkels overlappen niet.\n");
    }
}

int checkSphere(circle_t _c0, circle_t _c1)
{
    float distance;
    int deltaX, deltaY;
    
    deltaX = _c1.x - _c0.x;
    deltaY = _c1.y - _c0.y;
    distance = pythagoras(deltaX, deltaY);

    return (distance < _c0.s + _c1.s) ? 1 : 0;
}

float pythagoras(float x, float y)
{
    return sqrtf((x * x) + (y * y));
}