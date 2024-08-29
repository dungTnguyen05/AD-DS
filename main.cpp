#include "BubbleSort.h"
#include "QuickSort.h"
#include "RecursiveBinarySearch.h"

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> list;
    int num;

    while (cin >> num) {
        list.push_back(num);
    }

    BubbleSort b;
    QuickSort q;
    RecursiveBinarySearch r;

    vector<int> sort1 = b.sort(list);
    vector<int> sort2 = q.sort(list);
    bool found = r.search(sort2, 1);

    if (found) {
        cout << "true" << " ";
    }

    else {
        cout << "false" << " ";
    }

    for (int& element: sort2) {
        cout << element << " ";
    }

    cout << endl;
}