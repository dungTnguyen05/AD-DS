#ifndef TRIENODE_H
#define TRIENODE_H

#include <unordered_map>

class TrieNode {
    std::unordered_map<char, TrieNode*> children;
    bool isEndOfWord = false;

    friend class Autocomplete;
};

#endif