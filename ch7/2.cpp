#include <cstdio>
#include <cmath>
#include <thread>

#define MAX 999999

int list[MAX];

void superzeef(int, int);
bool is_prime(int t);

int main(int argc, char const *argv[])
{
    std::thread t1(superzeef, 0, MAX/4);
    std::thread t2(superzeef, MAX/4, 2* (MAX/4));
    std::thread t3(superzeef, 2 * (MAX / 4), 3*(MAX/4));
    std::thread t4(superzeef, 3*(MAX/4), MAX);

    t1.join();
    t2.join();
    t3.join();
    t4.join();

    // for (int i = 0; i <= MAX; i++)
    // {
    //     list[i] = is_prime(i);
    // }

    for (int i = 0; i <= MAX; i++)
    {
        std::printf("%d:%d\n", i, list[i]);
    }
    return 0;
}

void superzeef(int offset, int lim)
{
    for(int i = offset; i < lim; i++)
    {
        list[i] = is_prime(i);
    }
}

bool is_prime(int t)
{
    if(t == 0 || t==1 || t==2) return 1;
    for(int i = 2; i <= t/2; i++)
    {
        
    }
    return 1;
}