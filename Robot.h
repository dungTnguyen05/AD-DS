#ifndef ROBOT_H
#define ROBOT_H

#include "Move.h"

class Robot: public Move {
    public:
        bool beat(Move* move);
        string getName();
};

#endif