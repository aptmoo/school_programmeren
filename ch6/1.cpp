#include <iostream>
#include <cstdio>

struct Point
{
    float x = 0;
    float y = 0;

    bool operator>(const Point p)
    {
        return p.x < x && p.y < y;
    }
    bool operator<(const Point p)
    {
        return p.x > x && p.y > y;
    }
};

class Rectangle
{
public:
    Rectangle(Point point0, Point point1) : p0(point0), p1(point1) {};

    Point GetPoint0() { return p0; };
    Point GetPoint1() { return p1; }

    float getArea()
    {
        float deltax = p1.x - p0.x;
        float deltay = p1.y - p0.y;
        return deltax * deltay;
    }  

    void move(float x, float y)
    {
        p0.x += x;
        p0.y += y;
        p1.x += x;
        p1.y += y;
    }

    void print()
    {
        std::printf("%f:%f, %f:%f\n", p0.x, p0.y, p1.x, p1.y);
    }

    void rotate()
    {
        float t;
        t = p1.x;
        p1.x = p1.y;
        p1.y = t;
    }

    bool checkPoint(Point p)
    {
        std::printf("%f %f \n", p0.x, p0.y);
        std::printf("%f %f \n", p1.x, p1.y);
        std::printf("%d\n", p > p0);
        std::printf("%d\n", p < p1);
        return (p > p0) && (p < p1);
    }
private:
    Point p0;
    Point p1;
};

int main()
{
    Rectangle rect((Point){1, 4}, (Point){10, 8});
    rect.print();
    std::printf("Rect area: %f\n", rect.getArea());
    rect.move(2, 5);
    rect.print();
    std::printf("Rect area: %f\n", rect.getArea());

    rect.rotate();
    rect.print();
    std::printf("Rect area: %f\n", rect.getArea());

    Point thingy = {0.0f, 0.0f};
    Point anotherThingy = {5.0f, 10.0f};

    std::printf("-----\n");
    std::printf("ABC%d\n", rect.checkPoint(thingy));
    std::printf("ABC%d\n", rect.checkPoint(anotherThingy));
}