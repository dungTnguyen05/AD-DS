#include "Move.h"

Move::Move(string move) {
    this -> move = move;
}

string Move::getMove() {
    return move;
}