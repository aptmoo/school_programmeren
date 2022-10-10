#include <iostream>
#include <string>

bool anagram(std::string a, std::string b);

int main(int argc, char const *argv[])
{
    std::cout << anagram("orkest", "koerst") << '\n';
    return 0;
}

bool anagram(std::string a, std::string b)
{
    if(a.length() != b.length()) return false;

    int k = 0;
    for(auto i : a)
    {
        for(auto j : b)
        {
            if(i == j)k++;
        }
    }
    return (k == a.length());
}