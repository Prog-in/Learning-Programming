#include <iostream>
#include <vector>

int main () {
    std::vector<int> ivec(10, 0);
    std::vector<int>::size_type cnt = ivec.size();
    // assign values from size . . . 1 to the elements in ivec
    for(std::vector<int>::size_type ix = 0; ix != ivec.size(); ix++, cnt--)
        ivec[ix] = cnt;

    for (auto el : ivec)
        std::cout << el << " ";
    std::cout << std::endl;

    return 0;
}