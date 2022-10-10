#include <iostream>

namespace jl
{
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

        float x, y, z;
    };

    class PointMass
    {
    public:
        void Move(float dt)
        {
            // vscode hates me?
            position += speed * dt;
        }

        void SetVelocity(const Vector3& newvel)
        {
            velocity = newvel;
        };
    private:
        Vector3 position;
        Vector3 velocity;
    };
}

int main(int argc, char const *argv[])
{
    
    return 0;
}

