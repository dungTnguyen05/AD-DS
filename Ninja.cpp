#include "Ninja.h"

bool Ninja::beat(Move* move) {
    return (move -> getName() == "Zombie" || move -> getName() == "Pirate");
}

string Ninja::getName() {
    return "Ninja";
}