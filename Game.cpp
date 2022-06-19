#include "Game.hpp"

namespace ariel{
    Game::Game(Team* in, Team* out){
        this->_in = in;
        this->_out = out;
        this->_scoreIn = 0;
        this->_scoreOut = 0;
    }
    Team* Game::winner(){
        if(this->_scoreIn > this->_scoreOut){
            return this->getIn();
        }
        return this->getOut();
    }

    Team* Game::playGame(){
        Team* in = this->getIn();
        Team* out = this->getOut();
        int score = rand()%100;
        if (score < 50 && score > 5){
            score += 50;
        }
        this->_scoreIn = score;
        score = rand()%100;
        if (score < 50){
            score += 50;
        }
        this->_scoreOut = score;
        if(this->_scoreIn > this->_scoreOut){
            this->getIn()->setNumOfWin(1);
            this->getIn()->setHefresh(this->_scoreIn - this->_scoreOut);
        }
        else{
            this->getOut()->setNumOfLose(1);
            this->getOut()->setHefresh(this->_scoreOut - this->_scoreIn); 
        }
        this->_winner = this->winner()->getName();
        return this->winner();
    }
}