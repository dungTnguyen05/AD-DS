#ifndef ROCK_H
#define ROCK_H

#include "Move.h"

class Rock: public Move {
    public:
        bool beat(Move* move);
        string getName();
};

#endif