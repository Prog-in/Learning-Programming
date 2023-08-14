// Read a set of integers into a vector. Print the sum of 
// each pair of adjacent elements. Change your program so 
// that it prints the sum of the first and last elements, 
// followed by the sum of the second and second-to-last, 
// and so on.

#include <iostream>
#include <vector>

int main() {
    std::vector<int> v1;
    int num;
    while (std::cin >> num)
        v1.push_back(num);

    auto size = v1.size();
    if (size == 0) {
        std::cout << "No elements." << std::endl;
        return -1;
    }
    for (decltype(size) i = 0; i < size / 2; i++) {
        std::cout << v1[i] + v1[size - i - 1] << " ";
    }
    if (size % 2 != 0) {
        std::cout << v1[size / 2];
    }
    std::cout << std::endl;

    return 0;
}