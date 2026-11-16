#include <iostream>
#include <vector>

// Return the last index of target, or -1 if it is absent.
int findLast(const std::vector<int>& v, int target) {
    // TODO: Implement the function.
    for (int i = static_cast<int>(v.size()) - 1; i >= 0; --i) {
        if (v[i] == target) {
            return i;
        }
    }
    return -1; // Replace this placeholder.
}

int main() {
    std::vector<int> values{4, 7, 2, 7};
    std::cout << "Target 7: " << findLast(values, 7) << " (expected 3)\n";
    std::cout << "Target 5: " << findLast(values, 5) << " (expected -1)\n";
}
