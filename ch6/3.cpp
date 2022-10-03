#include <iostream>
#include <map>
#include <string>
#include <sstream>

class PlayerManager
{
public:
    PlayerManager(){};
    ~PlayerManager(){};

    void AddPlayer(std::string name, int score)
    {
        players.insert({name, score});
    };
    bool PlayerExists(std::string name)
    {
        return players.find(name) != players.end();
    }
    void SetPlayerScore(std::string name, int score)
    {
        // Check if player exists
        if(players.find(name) == players.end())
        {
            return;
        }
        players[name] = score;
    }
    int getPlayerScore(std::string name)
    {
        // Check if player exists
        if(players.find(name) == players.end())
        {
            return -1;
        }
        return players[name];
    };
    std::string toString()
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
    PlayerManager manager;
    std::string input;
    while (true)
    {
        std::cout << ":";
        input.clear();
        std::cin >> input;
        if(input == "q")
        {
            return 0;
        }
        else if(input == "a")
        {
            int NewScore;
            input.clear();
            std::cin >> input >> NewScore;
            if(manager.PlayerExists(input))
            {
                manager.SetPlayerScore(input, NewScore);
            }
            else
            {
                manager.AddPlayer(input, NewScore);    
            }
        }
        else if(input == "l")
        {
            std::cout << manager.toString();
        }
        else
        {
            std::cout << input << ": " << manager.getPlayerScore(input) << '\n';
        }
    }
    
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

class PlayerManager
{
public:
    PlayerManager(){};
    ~PlayerManager(){};

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
    PlayerManager manager;

    manager.AddPlayer("Bjarne Soustrup", 45789);
    manager.AddPlayer("Rik van Cerato", 314789);
    manager.print();   
    return 0;
}
*/