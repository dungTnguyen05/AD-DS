#ifndef PREFIXMATCHER_H
#define PREFIXMATCHER_H

#include "PrefixNode.h"

class PrefixMatcher {
    private:
        PrefixNode* root;
    
    public:
        PrefixMatcher();
        void insert(std::string address, int routerNumber);
        int selectRouter(std::string networkAddress);
};

#endif