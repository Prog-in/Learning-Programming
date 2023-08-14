// Write a program to initialize a vector from an array of ints.

#include <iostream>
#include <vector>

int main() {
    std::vector<int> v1;
    int arr[] = {1, 2, 3, 4, 5};

    std::size_t size = sizeof(arr) / sizeof(arr[0]);
    for (std::size_t i = 0; i < size; i++) {
        v1.push_back(arr[i]);
    }

    for (auto i : v1) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    return 0;
}