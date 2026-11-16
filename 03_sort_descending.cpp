#include <iostream>
#include <utility>
#include <vector>

int main() {
    std::vector<int> v{2, 5, 1, 4};

    for (int pass = 0; pass < 3; ++pass) {
        for (int i = 0; i < 3 - pass; ++i) {
            // TODO: Replace false so the vector sorts from largest to smallest.
            if ( v[i] < v[i + 1] ) {
                std::swap(v[i], v[i + 1]);
            }
        }
    }

    for (int value : v) {
        std::cout << value << ' ';
    }
    std::cout << "(expected 5 4 2 1)\n";
}
