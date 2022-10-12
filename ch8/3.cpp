#include <iostream>
#include <memory>
#include <vector>
#include <cmath>

namespace jl
{
    static float pythagoras(float x, float y)
    {
        return sqrtf((x * x) + (y * y));
    }
    struct Vector3
    {
        Vector3(float _x, float _y, float _z) : x(_x), y(_y), z(_z){}; 
        Vector3(){};
        ~Vector3(){};

        Vector3 operator+(const Vector3& other)
        {
            Vector3 v;
            v.x = x + other.x;
            v.y = y + other.y;
            v.z = z + other.z;
            return v;
        }

        Vector3 operator+(const float scalar)
        {
            Vector3 v;
            v.x = x + scalar;
            v.y = y + scalar;
            v.z = z + scalar;
            return v;
        }

        Vector3 operator-(const Vector3& other)
        {
            Vector3 v;
            v.x = x - other.x;
            v.y = y - other.y;
            v.z = z - other.z;
            return v;
        }

        Vector3 operator-(const float scalar)
        {
            Vector3 v;
            v.x = x - scalar;
            v.y = y - scalar;
            v.z = z - scalar;
            return v;
        }

        Vector3 operator*(const Vector3& other)
        {
            Vector3 v;
            v.x = x * other.x;
            v.y = y * other.y;
            v.z = z * other.z;
            return v;
        }

        Vector3 operator*(const float scalar)
        {
            Vector3 v;
            v.x = x * scalar;
            v.y = y * scalar;
            v.z = z * scalar;
            return v;
        }

        Vector3 operator/(const Vector3& other)
        {
            Vector3 v;
            v.x = x / other.x;
            v.y = y / other.y;
            v.z = z / other.z;
            return v;
        }

        Vector3 operator/(const float scalar)
        {
            Vector3 v;
            v.x = x / scalar;
            v.y = y / scalar;
            v.z = z / scalar;
            return v;
        }

        void operator+=(const Vector3& other)
        {
            x += other.x;
            y += other.y;
            z += other.z;
        }

        void operator+=(const float scalar)
        {
            x += scalar;
            y += scalar;
            z += scalar;
        }

        void operator-=(const Vector3& other)
        {
            x -= other.x;
            y -= other.y;
            z -= other.z;
        }

        void operator-=(const float scalar)
        {
            x -= scalar;
            y -= scalar;
            z -= scalar;
        }

        void operator*=(const Vector3& other)
        {
            x *= other.x;
            y *= other.y;
            z *= other.z;
        }

        void operator*=(const float scalar)
        {
            x *= scalar;
            y *= scalar;
            z *= scalar;
        }

        void operator/=(const Vector3& other)
        {
            x /= other.x;
            y /= other.y;
            z /= other.z;
        }

        void operator/=(const float scalar)
        {
            x /= scalar;
            y /= scalar;
            z /= scalar;
        }

        float Distance(Vector3 other)
        {
            float dx = other.x - x;
            float dy = other.y - y;
            float dz = other.z - z;

            return pythagoras(pythagoras(dx, dy), dz);
        }

        float x, y, z;
    };

    class Field;

    class PointMass
    {
    public:
        PointMass(Vector3 initialPosition, Vector3 initialVelocity) : position(initialPosition), velocity(initialVelocity){};

        void Move(float dt)
        {
            position += velocity * dt;
        }

        void SetVelocity(const Vector3& newvel)
        {
            velocity = newvel;
        };
        void Dump()
        {
            printf("%f, %f, %f\n", position.x, position.y, position.z);
        }
    private:
        Vector3 position;
        Vector3 velocity;

        friend class Field;
    };

    class Field
    {
        public:
            Field(Vector3 __center, float __strength) : center(__center), strength(__strength) {};
        private:
            Vector3 center;
            float radius;
            float strength;

    };


}

int main(int argc, char const *argv[])
{
    jl::PointMass pt({0, 0, 0},{5, 10, 0});
    pt.Dump();
    pt.Move(1.395f);
    pt.Dump();
    return 0;
}

