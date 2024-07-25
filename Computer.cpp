#include "Computer.h"

Computer::Computer() {
    this -> move = 'R';
    this -> name = "Computer";
}

char Computer::makeMove() {
    return move;
}   

char Computer::getMove() {
    return move;
}

string Computer::getName() {
    return name;
}   