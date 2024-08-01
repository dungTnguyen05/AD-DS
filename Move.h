#ifndef MOVE_H
#define MOVE_H

#include <iostream>
using namespace std;

class Move {
    private:
        string move;
    public:
        Move(string move);
        string getMove();
};

#endif