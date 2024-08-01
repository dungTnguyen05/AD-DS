#ifndef HUMAN_H
#define HUMAN_H

#include "Player.h"

class Human: public Player {
    public:
        Human(string name);
        string getName();
        Move* makeMove();
};

#endif