#include <iostream>

int main() {
    int ia[3][4] = {
        {0, 1, 2, 3},
        {4, 5, 6, 7},
        {8, 9, 10, 11}
    };


    std::cout << "Using range for:\n";
    for (const int (&row)[4] : ia) {
        for (const int el : row) {
            std::cout << el << " ";
        }
        std::cout << std::endl;
    }

    std::cout << "\nUsing for loop with subscripts:\n";
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 4; ++j)
            std::cout << ia[i][j] << " ";
        std::cout << std::endl;
    }

    std::cout << "\nUsing for loop with pointers:\n";
    for (int (*p)[4] = ia; p != ia + 3; ++p) {
        for (int *q = *p; q != *p + 4; ++q) {
            std::cout << *q << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}