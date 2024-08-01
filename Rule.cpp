#include "Rule.h"

int Rule::findIndexRSP(Move* m) {
    int idx = -1;

    for (int i = 0; i < rps.size(); i++) {
        if (rps.at(i) == m -> getMove()) {
            idx = i;
            return idx;
        }
    }

    return idx;
}

int Rule::findIndexMRNZP(Move* m) {
    int idx = -1;

    for (int i = 0; i < mrnzp.size(); i++) {
        if (mrnzp.at(i) == m -> getMove()) {
            idx = i;
            return idx;
        }
    }

    return idx;
}

Move* Rule::beat(Move* m1, Move* m2) {
    int idx1 = findIndexRSP(m1);
    int idx2 = findIndexRSP(m2);

    
    if (idx1 > -1) {
        if (idx1 == idx2) {
            return nullptr;
        }

        if (idx2 - idx1 == 1) {
            return m1;
        }

        if (idx2 - idx1 == -rps.size() + 1) {
            return m1;
        }

        return m2;
    }

    idx1 = findIndexMRNZP(m1);
    idx2 = findIndexMRNZP(m2);

    if (idx1 > -1) {
        if (idx1 == idx2) {
            return nullptr;
        }

        if (idx2 - idx1 == 1 || idx2 - idx1 == 2) {
            return m1;
        }

        if (idx1 == mrnzp.size() - 2 && idx2 == 0) {
            return m1;
        }

        if (idx1 == mrnzp.size() - 1 && (idx2 == 0 || idx2 == 1)) {
            return m1;
        }

        return m2;
    }

    return nullptr;
}