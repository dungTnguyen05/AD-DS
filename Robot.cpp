#include "Robot.h"

bool Robot::beat(Move* move) {
    return (move -> getName() == "Ninja" || move -> getName() == "Zombie");
}

string Robot::getName() {
    return "Robot";
}