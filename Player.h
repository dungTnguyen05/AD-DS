#ifndef PLAYER_H
#define PLAYER_H

#include "Move.h"

class Player {
    protected:
        string name;
        Move* move;

    public:
        virtual string getName() = 0;
        virtual Move* makeMove() = 0;
};

#endif