#include "Computer.h"

Computer::Computer() {
    move = 'R';
    name = "Computer";
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