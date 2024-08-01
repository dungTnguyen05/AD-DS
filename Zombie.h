#ifndef ZOMBIE_H
#define ZOMBIE_H

#include "Move.h"

class Zombie: public Move {
    public:
        bool beat(Move* move);
        string getName();
};

#endif