#ifndef PIRATE_H
#define PIRATE_H

#include "Move.h"

class Pirate: public Move {
    public:
        bool beat(Move* move);
        string getName();
};

#endif