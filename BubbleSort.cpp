#include "BubbleSort.h"
using namespace std;

vector<int> BubbleSort::sort(vector<int> list) {
    for (size_t i = list.size() - 1; i > 0; i--) {
        for (size_t j = 0; j < i; j++) {
            if (list[j] > list[j + 1]) {
                swap(list[j], list[j + 1]);
            }
        }
    }

    return list;
}