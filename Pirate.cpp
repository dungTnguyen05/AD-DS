#include "Pirate.h"

bool Pirate::beat(Move* move) {
    return (move -> getName() == "Monkey" || move -> getName() == "Robot");
}

string Pirate::getName() {
    return "Pirate";
}