#ifndef COMPUTER_H
#define COMPUTER_H

#include "Player.h"
#include "Rock.h"

class Computer: public Player {
    public:
        Computer();
        string getName();
        Move* makeMove();
};
#endif