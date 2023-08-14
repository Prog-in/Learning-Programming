// Redo the last exercise (3-23.cpp) using iterators.

#include <iostream>
#include <vector>

int main() {
    std::vector<int> v1;
    int num;
    while (std::cin >> num)
        v1.push_back(num);

    auto beg = v1.begin(), end = v1.end();
    if (beg == end) {
        std::cout << "No elements." << std::endl;
        return -1;
    }
    end--;
    while (beg < end) {
        std::cout << *beg + *end << " ";
        beg++;
        end--;
    }
    if (beg == end) {
        std::cout << *beg;
    }
    std::cout << std::endl;

    return 0;
}