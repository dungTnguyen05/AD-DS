#include "Monkey.h"

bool Monkey::beat(Move* move) {
    return (move -> getName() == "Robot" || move -> getName() == "Ninja");
}

string Monkey::getName() {
    return "Monkey";
}