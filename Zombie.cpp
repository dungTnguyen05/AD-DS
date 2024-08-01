#include "Zombie.h"

bool Zombie::beat(Move* move) {
    return (move -> getName() == "Pirate" || move -> getName() == "Monkey");
}

string Zombie::getName() {
    return "Zombie";
}