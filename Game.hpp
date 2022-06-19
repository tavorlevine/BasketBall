#include <iostream>
#include <string>
#include "Team.hpp"

namespace ariel{
    class Game{
    private:
        Team* _in;
        Team* _out;
        int _scoreIn;
        int _scoreOut;
        std::string _winner;
    public:
        Game(Team* in, Team* out);
        ~Game();
        Team* winner();
        Team* getIn(){return this->_in;}
        Team* getOut(){return this->_out;}
        Team* playGame();
    };
    
    
}