#include <iostream>
#include <map>
#include <string>
#include <sstream>

class CPlayerManager
{
public:
    void AddPlayer(std::string name, int score)
    {
        players.insert({name, 10});
    };
    void SetPlayerScore(std::string name, int score)
    {
        // Check if player exists
        if(players.find(name) == players.end())
        {
            std::cout << "Player '" << name << "' not found, ignoring" << '\n';
        }
    }
    int getPlayerScore(std::string name)
    {
        // Check if player exists
        if(players.find(name) == players.end())
        {
            std::cout << "Player '" << name << "' not found, defaulting to 0" << '\n';
        }
        return players[name];
    };
    std::string dump()
    {
        std::stringstream stream;
        for(auto const &o : players)
        {
            stream << o.first << ":" << o.second << '\n';
        }
        return stream.str();
    };
private:
    std::map<std::string, int> players;
};

int main(int argc, char const *argv[])
{
    CPlayerManager manager;
    manager.AddPlayer("DooDooMan", 10);
    std::cout << manager.getPlayerScore("Kool-aid man") << '\n';
    std::cout << manager.dump();
    return 0;
}


/*
class Player
{
public:
    Player() : _score(-1), _name("Errno") {};
    Player(std::string name, int score) : _name(name), _score(score) {};

    inline std::string GetName(){return _name;};
    inline int GetScore(){return _score;};
private:

    int _score;
};

class CPlayerManager
{
public:
    CPlayerManager(){};
    ~CPlayerManager(){};

    void AddPlayer(const std::string name, const int score)
    {
        players.push_back(Player(name, score));
    }

    void print()
    {
        for(auto p : players)
        {
            std::cout << p.GetName() << ": " << p.GetScore() << '\n';
        }
    };
private:
    std::vector<Player> players;
};

int main(int argc, char const *argv[])
{
    CPlayerManager manager;

    manager.AddPlayer("Bjarne Soustrup", 45789);
    manager.AddPlayer("Rik van Cerato", 314789);
    manager.print();   
    return 0;
}
*/