#ifndef PAPER_H
#define PAPER_H

#include "Move.h"

class Paper: public Move {
    public:
        bool beat(Move* move);
        string getName();
};

#endif