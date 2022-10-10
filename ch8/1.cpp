#include <iostream>

class Breuk
{
public:
    Breuk() : teller(0), noemer(0){};
    Breuk(int _teller, int _noemer) : teller(_teller), noemer(_noemer){};
    ~Breuk(){};

    void Vereenvoudig(int fac)
    {
        for(int i = 0; !(teller % fac); i++)
            teller /= fac;
    };
    void print()
    {
        std::cout << teller << "/" << noemer;
    }
private:
    int teller, noemer;
};

int main(int argc, char const *argv[])
{
    Breuk ding(10, 2);
    ding.Vereenvoudig(2);
    ding.print();
    return 0;
}
