#include "Computer.h"

Computer::Computer() {
    move = 'R';
    name = "Computer";
}

char Computer::makeMove() {
    return move;
}   

string Computer::getName() {
    return name;
}   