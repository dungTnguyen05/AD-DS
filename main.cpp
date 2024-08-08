#include "Truckloads.h"
#include "Reverser.h"

int main() {
    Truckloads truck;
    int numCrates = 14;
    int loadSize = 3;
    cout << truck.numTrucks(numCrates, loadSize) << endl;

    Reverser reverser;
    int value = 190711;
    string characters = "Tri Dung Nguyen";
    cout << reverser.reverseDigit(value) << endl;
    cout << reverser.reverseString(characters) << endl;
}