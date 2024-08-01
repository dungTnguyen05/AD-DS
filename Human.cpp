#include "Human.h"

Human::Human(string name) {
    this -> name = name;
}

string Human::getName() {
    return name;
}

Move* Human::makeMove() {
    string newMove;
    cout << "Enter Move: ";
    cin >> newMove;
    
    this -> move = new Move(newMove);
    return move;
}