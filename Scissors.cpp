#include "Scissors.h"

bool Scissors::beat(Move* move) {
    return move -> getName() == "Paper";
}

string Scissors::getName() {
    return "Scissors";
}