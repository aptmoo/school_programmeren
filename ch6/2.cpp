#include <iostream>
#include <sstream>
#include <cstdio>

class Rational
{
public:
    Rational() : t(0), n(0) {};
    Rational(unsigned int num) : t(num), n(num) {};
    Rational(unsigned int teller, unsigned int noemer): t(teller), n(noemer) {};

    std::string toString()
    {
        std::stringstream stream;
        stream << (t/n);
    }
private:
    unsigned int t, n;
};