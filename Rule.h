#ifndef RULE_H
#define RULE_H

#include <iostream>
#include <vector>
#include "Move.h"
using namespace std;

class Rule {
    private:
        vector<string> rps{"Rock", "Scissors", "Paper"};
        vector<string> mrnzp{"Monkey", "Robot", "Ninja", "Zombie", "Pirate"};
    
    public:
        int findIndexRSP(Move* m);
        int findIndexMRNZP(Move* m);
        Move* beat(Move* m1, Move* m2);
};

#endif