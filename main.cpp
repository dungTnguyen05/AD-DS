#include "Player.h"
#include "Human.h"
#include "Computer.h"
#include "Move.h"
#include "Referee.h"

int main() {
    Player* player1 = new Human("Dung");
    Player* player2 = new Computer();

    Referee* referee = new Referee();
    Player* winner = referee -> refGame(player1, player2);

    if (winner == nullptr) {
        cout << "It's a tie!" << endl;
    } 
    
    else {
        cout << winner -> getName() << " wins!" << endl;
    }
}