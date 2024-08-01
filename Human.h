#ifndef HUMAN_H
#define HUMAN_H

#include "Player.h"
#include "Rock.h"
#include "Paper.h"
#include "Scissors.h"
#include "Monkey.h"
#include "Robot.h"
#include "Ninja.h"
#include "Zombie.h"
#include "Pirate.h"

class Human: public Player {
    public:
        Human(string name = "Human");
        string getName();
        Move* makeMove();
};

#endif