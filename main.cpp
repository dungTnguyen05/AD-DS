#include "Finder.h"
using namespace std;

int main() {
    Finder f;
    string s1 = "4634554567";
    string s2 = "45689";

    vector<int> res = f.findSubstrings(s1, s2);

    for (size_t i = 0; i < res.size(); i++) {
        cout << res[i] << endl;
    }
}