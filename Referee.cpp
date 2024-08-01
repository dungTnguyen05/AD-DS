#include "Referee.h"

Player* Referee::refGame(Player* player1, Player* player2) {
    Move* move1 = player1 -> makeMove();
    Move* move2 = player2 -> makeMove();

    if (move1 -> beat(move2)) {
        return player1;
    }

    if (move2 -> beat(move1)) {
        return player2;
    }

    return nullptr;
}