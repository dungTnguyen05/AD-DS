#include "Computer.h"

Computer::Computer() {
    this -> name = "Computer";
}

string Computer::getName() {
    return name;
}

Move* Computer::makeMove() {
    this -> move = new Rock();
    return move;
}