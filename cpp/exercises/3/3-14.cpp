// Write a program to read a sequence of ints from cin and store those
// values in a vector.

#include <iostream>
#include <vector>


int main() {
    std::vector<int> vec;
    int input;
    
    while (std::cin >> input) {
        vec.push_back(input);
    }

    for (int i : vec) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    return 0;
}