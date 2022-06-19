#include <iostream>
#include <algorithm>
#include "Schedule.hpp"

namespace ariel{
    bool Schedule::inRound(Game* g){
        for(size_t i=0; i<_round.size(); i++){
            if (_round.at(i)->getIn() == g->getIn() || _round.at(i)->getIn() == g->getOut()){
                return false;
            }
            if (_round.at(i)->getOut() == g->getIn() || _round.at(i)->getOut() == g->getOut()){
                return false;
            }
            return true;
            // if(std::find(_round, _round ,g->getIn())){
            // }
        }
        // if (g->getIn())
    }
    Schedule::Schedule(Leauge* leauge){
        this->_leauge = leauge;
        std::vector<Game*> games;
        for(size_t i= 0; i<20; i++){
            for(size_t j= 0; j<20; j++){
                if (i != j){
                    Game g = Game(leauge->getTeams().at(i), leauge->getTeams().at(j));
                    games.push_back(&g);
                }
            }
        }
        this->_table = games;
        for(size_t i=0; i<_table.size(); i++){
        // for(size_t j=0; j<20; j++){
            if (_round.size() <10){
                if (this->inRound(_table.at(i))){
                    // Game* = _table.at(i);
                    _round.push_back(_table.at(i));
                    _table.erase(_round.end());
                }
            }
            else{
                break;
            }
        }
        // }
    }
    
}