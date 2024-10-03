#ifndef PREFIXNODE_H
#define PREFIXNODE_H

#include <unordered_map>

class PrefixNode {
    std::unordered_map<char, PrefixNode*> children;
    int routerNumber;
    bool isEndOfAddress;

    friend class PrefixMatcher;
};

#endif