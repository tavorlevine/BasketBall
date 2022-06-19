#include <iostream>
#include "Team.hpp"

namespace ariel{
    Team::Team(std::string name, double level){
        this->_name = name;
        this->_level = level;
        this->_numOfWin = 0;
        this->_numOfLose = 0;
        this->_hefresh = 0;
    }

}