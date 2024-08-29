#include "RecursiveBinarySearch.h"
using namespace std;

bool RecursiveBinarySearch::search(vector<int> list, int num) {
    int mid_idx = list.size()/2;

    if (list.empty()) {
        return false;
    }

    if (num == list[mid_idx]) {
        return true;
    }

    if (num < list[mid_idx]) {
        vector<int> left(list.begin(), list.begin() + mid_idx);
        return search(left, num);
    }

    else {
        vector<int> right(list.begin() + mid_idx + 1, list.end());
        return search(right, num);
    }
}