// Write a program to create a vector with ten int elements. Using an
// iterator, assign each element a value that is twice its current value. 
// Test your program by printing the vector.

#include <iostream>
#include <vector>

int main() {
    std::vector<int> v1;
    int num;
    while (v1.size() < 10) {
        bool eof = !(std::cin >> num);
        if (eof) {
            std::cerr << "Error: the program needs 10 integers." << std::endl;
            return 1;
        }
        v1.push_back(num);
    }
    for (auto it = v1.begin(); it != v1.end(); it++) {
        *it *= 2;
    }

    for (auto it = v1.begin(); it != v1.end(); it++) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    return 0;
}