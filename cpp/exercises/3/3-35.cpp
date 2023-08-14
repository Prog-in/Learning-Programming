#include <iostream>

int main() {
    int mat[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    for (auto i = std::begin(mat); i < std::end(mat); i++) {
        *i = 0;
    }

    for (auto i : mat)
        std::cout << i << " ";
    std::cout << std::endl;

    return 0;
}