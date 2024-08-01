#include "Rock.h"

bool Rock::beat(Move* move) {
    return move -> getName() == "Scissors";
}

string Rock::getName() {
    return "Rock";
}