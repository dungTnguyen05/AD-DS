#ifndef SCISSORS_H
#define SCISSORS_H

#include "Move.h"

class Scissors: public Move {
    public:
        bool beat(Move* move);
        string getName();
};

#endif