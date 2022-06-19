#include<iostream>
#include <string>
#include <vector>
#include "Game.hpp"
#include "Leauge.hpp"


namespace ariel{
    class Schedule {
    private:
        Leauge* _leauge;
        std::vector<Game*> _table;
        std::vector<Game*> _round;
    public:
        Schedule(Leauge* leauge);
        ~Schedule();
        bool inRound(Game* g);
    };
}

