#include "Computer.h"

string Computer::getName() {
    return name;
}

Move* Computer::makeMove() {
    this -> move = new Rock();
    return move;
}