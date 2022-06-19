#include<iostream>
#include <string>
#include <vector>

namespace ariel{
    class Team{
    private:
        std::string _name;
        double _level;
        std::vector<Team*> _teams;
        int _numOfWin;
        int _numOfLose;
        int _hefresh;
    public:
        Team(std::string name, double level);
        Team();
        ~Team();
        std::string getName(){return this->_name;}
        double getLevel(){return this->_level;}
        std::vector<Team*> getTeams(){return this->_teams;}
        int getNumOfWin(){return this->_numOfWin;}
        int getNumOfLose(){return this->_numOfLose;}
        int getHefresh(){return this->_hefresh;}
        void setNumOfWin(int num){this->_numOfWin += num;}
        void setNumOfLose(int num){this->_numOfLose += num;}
        void setHefresh(int num){this->_hefresh += num;}
    };
    
}