#include "Reverser.h"
#include <cmath>

int Reverser::reverseDigit(int value) {
    if (value < 0) {
        return -1;
    }
    
    if (value < 10) {
        return value;
    }

    string valueString = to_string(value);
    int digit = value % 10;
    value /= 10;

    return digit * pow(10, valueString.size() - 1) + reverseDigit(value);
}

string Reverser::reverseString(string characters) {
    if (characters.size() == 0) {
        return "ERROR";
    }

    if (characters.size() == 1) {
        return characters;
    }

    return characters[characters.size() - 1] + reverseString(characters.substr(0, characters.size() - 1));
}