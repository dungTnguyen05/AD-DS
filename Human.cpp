#include "Human.h"

Human::Human(string name) {
    this -> name = name;
}

char Human::makeMove() {
    cout << "Enter move: ";
    cin >> this -> move;
    return move;
}

char Human::getMove() {
    return move;
}

string Human::getName() {
    return name;
}