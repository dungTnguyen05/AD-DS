#ifndef REFEREE_H
#define REFEREE_H

#include "Player.h"
#include "Rule.h"

class Referee {
    private:
        Rule* rule;

    public:
        Player* refGame(Player* player1, Player* player2);
};

#endif