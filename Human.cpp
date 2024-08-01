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
    
    if (newMove == "Rock") {
        this -> move = new Rock();  
        return move;
    }

    if (newMove == "Paper") {
        this -> move = new Paper();  
        return move;
    }

    if (newMove == "Scissors") {
        this -> move = new Scissors();  
        return move;
    }

    if (newMove == "Monkey") {
        this -> move = new Monkey();  
        return move;
    }

    if (newMove == "Robot") {
        this -> move = new Robot();  
        return move;
    }

    if (newMove == "Ninja") {
        this -> move = new Ninja();  
        return move;
    }

    if (newMove == "Zombie") {
        this -> move = new Zombie();  
        return move;
    }

    if (newMove == "Pirate") {
        this -> move = new Pirate();  
        return move;
    }

    return nullptr;
}