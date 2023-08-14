#include <iostream>
#include <vector>

int main() {
    int ival = 1;
    int *ptr = &ival;
    std::vector<int> vec = {0, 1, 2};

    // a
    std::cout << "ptr = " << ptr << " | *ptr = " << *ptr << std::endl;
    std::cout << (ptr != 0 && *ptr++) << std::endl;
    std::cout << "ptr = " << ptr << " | *ptr = " << *ptr << " | &ival = " << &ival << std::endl;

    // b
    std::cout << std::endl;
    std::cout << ival << std::endl;
    std::cout << (ival++ && ival) << std::endl;
    std::cout << ival << std::endl;

    //c
    std::cout << std::endl;
    std::cout << vec[ival++] << std::endl;
    std::cout << ival << std::endl;

    return 0;
}