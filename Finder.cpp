#include "Finder.h"
using namespace std;

vector<int> Finder::findSubstrings(string s1, string s2) {
    vector<int> res;
    string prefix = "";
    int last_idx = 0;

    for (size_t i = 0; i < s2.size(); i++) {
        prefix += s2[i];
        size_t found = s1.find(prefix, last_idx);

        if (found != string::npos) {
            res.push_back(found);
            last_idx = found;
        }

        else {
            res.insert(res.end(), s2.size() - i, -1);
            break;
        }
    }

    return res;
}