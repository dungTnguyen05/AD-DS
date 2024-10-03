#ifndef AUTOCOMPLETE_H
#define AUTOCOMPLETE_H

#include "TrieNode.h"
#include <string>
#include <vector>

class Autocomplete {
    private:
        TrieNode* root;

    public:
        Autocomplete();
        void insert(std::string word);
        std::vector<std::string> getSuggestions(std::string partialWord);
};

#endif