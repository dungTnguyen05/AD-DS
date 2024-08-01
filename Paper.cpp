#include "Paper.h"

bool Paper::beat(Move* move) {
    return move -> getName() == "Rock";
}

string Paper::getName() {
    return "Paper";
}