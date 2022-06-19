#include <iostream>
#include <vector>
#include "Team.hpp"

namespace ariel{
    class Leauge{
    private:
        std::vector<Team*> _teams;
    public:
        Leauge(std::vector<Team*> teams);
        Leauge();
        ~Leauge();
        std::vector<Team*> getTeams(){return this->_teams;}
    };
    
    
}