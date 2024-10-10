#include <vector>
#include <queue>

int kth_largest(std::vector<int> values, int k) {
    std::priority_queue<int> pq;

    for (int& value: values) {
        pq.push(value);
    }

    while (k != 1) {
        pq.pop();
        k--;
    }

    return pq.top();
}