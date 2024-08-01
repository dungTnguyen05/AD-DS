#ifndef MOVE_H
#define MOVE_H

#include <iostream>
using namespace std;

class Move {
    public:
        virtual bool beat(Move* move) = 0;
        virtual string getName() = 0;
};

#endif