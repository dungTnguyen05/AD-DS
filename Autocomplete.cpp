#include "Autocomplete.h"

Autocomplete::Autocomplete() {
    root = new TrieNode();
}

void Autocomplete::insert(std::string word) {
    TrieNode* curr = root;

    for (char& c: word) {
        if (curr -> children.find(c) == curr -> children.end()) {
            curr -> children[c] = new TrieNode();
        }

        curr = curr -> children[c];
    }

    curr -> isEndOfWord = true;
}

std::vector<std::string> Autocomplete::getSuggestions(std::string partialWord) {
    std::vector<std::string> suggestions;
    TrieNode* curr = root;

    for (char& c: partialWord) {
        if (curr -> children.find(c) == curr -> children.end()) {
            return {};
        }

        curr = curr -> children[c];
    }   

    std::string suggestion = partialWord;

    if (curr -> isEndOfWord) {
        suggestions.push_back(suggestion);
    }

    for (auto& it: curr -> children) {
        suggestion = partialWord + it.first;
        std::vector<std::string> temp = getSuggestions(suggestion);
        suggestions.insert(suggestions.end(), temp.begin(), temp.end());
    }

    return suggestions;
}