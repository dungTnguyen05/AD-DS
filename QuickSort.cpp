#include "QuickSort.h"
#include <cmath>
using namespace std;

vector<int> QuickSort::sort(vector<int> list) {
    quick_sort(list, 0, list.size() - 1);
    return list;
}

void QuickSort::quick_sort(vector<int>& list, int start, int end) {
    if (start >= end) {
        return;
    }

    int pivot_idx = partition(list, start, end);

    // sort recursively (left and right parts of the pivot)
    quick_sort(list, start, pivot_idx - 1);
    quick_sort(list, pivot_idx + 1, end);
}

int QuickSort::partition(vector<int>& list, int start, int end) {
    int pivot_idx = min(start + 2, end); // pivot is the 3rd value
    int pivot = list[pivot_idx];

    swap(list[pivot_idx], list[end]); // move pivot to the end
    int final_idx = start;

    for (int i = start; i < end; i++) {
        if (list[i] < pivot) {
            swap(list[i], list[final_idx]);
            final_idx++;
        }
    }

    swap(list[final_idx], list[end]); // move pivot to its final place

    return final_idx;
}