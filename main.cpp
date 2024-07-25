#include "Player.h"
#include "Human.h"
#include "Computer.h"
#include "Referee.h"

int main() {
    Referee* ref = new Referee();

    int numHumans;
    int numComputers;

    cout << "Enter the number of humans: ";
    cin >> numHumans;

    cout << "Enter the number of computers: ";
    cin >> numComputers;

    Player** players = new Player*[numHumans + numComputers];

    for (int i = 0; i < numHumans; i++) {
        string name;
        cout << "Enter a name: ";
        cin >> name;

        players[i] = new Human(name);
        players[i] -> makeMove();
    }

    for (int i = numHumans; i < numHumans + numComputers; i++) {
        players[i] = new Computer();
    }

    for (int i = 0; i < numHumans + numComputers - 1; i++) {
        for (int j = i + 1; j < numHumans + numComputers; j++) {
            Player* winner = ref -> refGame(players[i], players[j]);

            if (winner == nullptr) {
                cout << "It's a Tie" << endl;
            }

            else {
                cout << winner -> getName() << " Wins" << endl;
            }
        }
    }

    for (int i = 0; i < numHumans + numComputers; i++) {
        delete players[i];
    }

    delete[] players;
    delete ref;
}