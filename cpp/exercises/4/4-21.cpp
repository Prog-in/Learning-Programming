#include <iostream>
#include <vector>

int main() {
    std::vector<int> ivec = {1, 2, 3, 4, 5};
    for (auto &val : ivec)
        val = (val % 2 == 0) ? val : val * 2;

    for (const auto val : ivec)
        std::cout << val << " ";
    std::cout << std::endl;

    return 0;
}