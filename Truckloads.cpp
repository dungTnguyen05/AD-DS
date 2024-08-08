#include "Truckloads.h"

int Truckloads::numTrucks(int numCrates, int loadSize) {
    if (numCrates <= loadSize) {
        return 1;
    }

    int leftCrates = numCrates/2;
    int rightCrates = numCrates - leftCrates;

    return numTrucks(leftCrates, loadSize) + numTrucks(rightCrates, loadSize);
}