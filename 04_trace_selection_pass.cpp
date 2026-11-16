#include <iostream>
#include <vector>

int main() {
    std::vector<int> v{7, 3, 9, 1};
    int minIndex = 0;
    int comparisons = 0;

    // TODO: Before running, predict minIndex and comparisons.
    for (int i = 1; i < 4; ++i) {
        // TODO: Add 1 to comparisons here.
        ++comparisons;
        if (v[i] < v[minIndex]) {
            minIndex = i;
        }
    }

    std::cout << "minIndex: " << minIndex << '\n';
    std::cout << "comparisons: " << comparisons << '\n';
}
