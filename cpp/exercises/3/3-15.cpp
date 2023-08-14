// Repeat the previous program but read strings this time.

#include <iostream>
#include <vector>
#include <string>

int main() {
    std::vector<std::string> vec;
    std::string input;
    
    while (std::cin >> input) {
        vec.push_back(input);
    }

    for (std::string s : vec) {
        std::cout << s << " ";
    }

    return 0;
}