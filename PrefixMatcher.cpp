#include "PrefixMatcher.h"

PrefixMatcher::PrefixMatcher() {
    root = new PrefixNode();
}

void PrefixMatcher::insert(std::string address, int routerNumber) {
    PrefixNode* curr = root;

    for (char& c: address) {
        if (curr -> children.find(c) == curr -> children.end()) {
            curr -> children[c] = new PrefixNode();
        }

        curr = curr -> children[c];
    }

    curr -> routerNumber = routerNumber;
    curr -> isEndOfAddress = true;  
}

int PrefixMatcher::selectRouter(std::string networkAddress) {
    PrefixNode* curr = root;
    int longestMatchRouter = -1;

    for (char& c: networkAddress) {
        if (curr -> children.find(c) == curr -> children.end()) {
            break;
        }

        curr = curr -> children[c];

        if (curr -> isEndOfAddress) {
            longestMatchRouter = curr -> routerNumber;
        }
    }

    return longestMatchRouter;
}