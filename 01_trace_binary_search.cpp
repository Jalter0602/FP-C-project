#include <iostream>
#include <vector>

int binarySearch(const std::vector<int>& values, int target) {
    int low = 0;
    int high = static_cast<int>(values.size()) - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        // TODO: Print low, high, and mid here to check your trace.
        std::cout << "low = " << low << " high = " << high << " mid = " << mid << '\n';
        if (values[mid] == target) {
            return mid;
        }
        if (target < values[mid]) {
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }
    return -1;
}

int main() {
    std::vector<int> v{2, 5, 8, 12, 16};

    // TODO: Before running, list low, high, and mid at each step.
    // Then predict index and compare it with the output.
    int index = binarySearch(v, 12);
    std::cout << "Index: " << index << '\n';
    // abcyx
    //lsjdfhkdbvlkj
    //s.krcfjhnskdjhf
    //lkasdjhfklsdj
    //skdjhfv
    //alcksdjhfvjsh
    //kasjdhfijch
}
