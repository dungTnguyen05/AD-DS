#include "Referee.h"

Player* Referee::refGame(Player* player1, Player* player2) {
    Move* m1 = player1 -> makeMove();
    Move* m2 = player2 -> makeMove();

    if (rule -> beat(m1, m2) == m1) {
        return player1;
    }

    if (rule -> beat(m1, m2) == m2) {
        return player2;
    }

    return nullptr;
}