#include "Referee.h"

Referee::Referee() {
}   

Player* Referee::refGame(Player* player1, Player* player2) {
    char p1Move = player1 -> makeMove();
    char p2Move = player2 -> makeMove();

    if (p1Move == p2Move) {
        return nullptr;
    }

    if (p1Move == 'R' && p2Move == 'P') {
        return player2;
    }

    if (p1Move == 'P' && p2Move == 'S') {
        return player2;
    }

    if (p1Move == 'S' && p2Move == 'R') {
        return player2;
    }

    return player1;
}