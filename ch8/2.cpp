#include <iostream>
#include <string>
#include <vector>

class Account;
class AccountManager;

class Account
{
public:
    Account(std::string __name, int __value): name(__name), value(__value){}
    ~Account(){};
private:
    std::string name;
    int value;

    AccountManager* manager;
    friend class AccountManager;    
};

class AccountManager
{
public:
    void AddAccount(const std::string& name, const int value)
    {
        _accounts.push_back({name, value});
        _accounts.back().manager = this;
    };
    void Transfer(int to, int from, int value)
    {
        _accounts.at(from).value -= value;
        _accounts.at(to).value += value;
    }

private:
    std::vector<Account> _accounts;
};

int main(int argc, char const *argv[])
{
    return 0;
}
