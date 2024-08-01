#include "Player.cpp"
#include "Human.cpp"
#include "Computer.cpp"
#include "Move.cpp"
#include "Referee.cpp"

int main() {
    Player* player1 = new Human("Dung");
    Player* player2 = new Computer();

    Referee* referee = new Referee();
    Player* winner = referee -> refGame(player1, player2);

    if (winner == nullptr) {
        cout << "It's a tie!" << endl;
    } else {
        cout << winner -> getName() << " wins!" << endl;
    }
}