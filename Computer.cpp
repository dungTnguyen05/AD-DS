#include "Computer.h"

Computer::Computer() {
    this -> move = 'R';
    this -> name = "Computer";
}

char Computer::makeMove() {
    return move;
}   

string Computer::getName() {
    return name;
}   